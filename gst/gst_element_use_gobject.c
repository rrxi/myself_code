/*
 * =====================================================================================
 *
 *       Filename:  gst_element_use_gobject.c
 *
 *    Description:  using an element as a GObject
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 14时27分49秒
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

int main(int argc, char *argv[])
{
  GstElement *element;
  gchar *name;

  /*init Gstreamer*/
  gst_init(&argc, &argv);

  /*create element*/
  element = gst_element_factory_make("fakesrc", "source");

  /*get name*/
  g_object_get(G_OBJECT(element), 'name', &name, NULL);
  g_print("The name of the element is '%s'.\n",name);
  g_free(name);

  gst_object_unref(GST_OBJECT(element));

  return 0;
}
