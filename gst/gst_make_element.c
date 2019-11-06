/*
 * =====================================================================================
 *
 *       Filename:  gst_make_element.c
 *
 *    Description:  make GstElement
 *                  from 'fakesrc' factory to create 'source' elements
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 14时10分12秒
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

  /*init GStreamer*/
  gst_init(&argc, &argv);

  /*create element*/
  element = gst_element_factory_make("fakesrc", "source");
  if(!element){
    g_print("Failed to create element of type 'fakesrc'\n");
    return -1;
  }

  gst_object_unref(GST_OBJECT(element));

  return 0;
}
