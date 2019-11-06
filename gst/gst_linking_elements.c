/*
 * =====================================================================================
 *
 *       Filename:  gst_linking_elements.c
 *
 *    Description:  linking elements:source,filter,sink
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 15时13分20秒
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
  GstElement *pipeline;
  GstElement *source, *filter, *sink;

  /*init gstreamer*/
  gst_init(&argc, &argv);

  /*create pipeline */
  pipeline = gst_pipeline_new("my-pipeline");

  /*create elements */
  source = gst_element_factory_make("fakesrc", "source");
  filter = gst_element_factory_make("identity", "filter");
  sink = gst_element_factory_make("fakesink", "sink");

  /*must add elements to pipeline before linking them*/
  gst_bin_add_many(GST_BIN(pipeline), source, filter, sink, NULL);

  /*link */
  if(!gst_element_link_many(source, filter, sink, NULL)){
    g_warning("Failed to link elements!");
  }
}
