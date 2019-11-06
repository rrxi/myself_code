/*
 * =====================================================================================
 *
 *       Filename:  gst_use_bus.c
 *
 *    Description:  use bus
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 17时08分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <gst/gst.h>

static GMainLoop *loop;

static gboolean my_bus_callback(GstBus *bus, GstMessage *message, gpointer data)
{
  g_print("Got %s message\n", GST_MESSAGE_TYPE_NAME(message));

  switch(GST_MESSAGE_TYPE(message)){
    case GST_MESSAGE_ERROR:{
      GError *err;
      gchar *debug;

      gst_message_parse_error(message, &err, &debug);
      g_print("Error: %s\n", err->message);
      g_error_free(err);
      g_free(debug);

      g_main_loop_quit(loop);
      break;
    }
    case GST_MESSAGE_EOS:
      /* end-of-stream */
      g_main_loop_quit(loop);
      break;
    default:
      /* unhandled message */
      break;
  }
  return TRUE
}

gint main(gint argc, gchar *argv[])
{
  GstElement *pipeline;
  GstBus *bus;
  guint bus_watch_id;

  /* init */
  gst_init(&argc, &argv);

  /* crate pipeline,add handler */
  pipeline = gst_pipeline_new("my_pipeline");

}
