/*
 * =====================================================================================
 *
 *       Filename:  gst_make_bin.c
 *
 *    Description:  make a bin
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 16时10分12秒
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
  GstElement *bin, *pipeline, *source, *sink;

  /*init gstreamer */
  gst_init(&argc, &argv);

  /*create */
  pipeline = gst_pipeline_new("my_pipeline");
  bin = gst_bin_new("my_bin");
  source = gst_element_factory_make("fakesrc", "source");
  sink = gst_element_factory_make("fakesink", "sink");

  /*First add the element to the bin */
  gst_bin_add_many(GST_BIN(bin), source, sink, NULL);
  /* add the bin to the pipeline */
  gst_bin_add(GST_BIN(pipeline), bin);

  /* link the elements */
  gst_element_link(source, sink);
}
