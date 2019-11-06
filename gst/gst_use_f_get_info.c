/*
 * =====================================================================================
 *
 *       Filename:  gst_use_f_get_info.c
 *
 *    Description:  getting information about an element using a factory
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 14时50分44秒
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
  GstElementFactory *factory;

  /*init Gstreamer */
  gst_init(&argc, &argv);

  /*get factory */
  factory = gst_element_factory_find("fakesrc");
  if(!factory){
    g_print("You don't have the 'fakesrc' element installed!\n");
    return -1;
  }

  /*display information */
  g_print("The '%s' element is a memeber of the category %s.\n"
         "Description: %s\n",
         gst_plugin_feature_get_name(GST_PLUGIN_FEATURE(factory)),
         gst_element_factory_get_metadata(factory, GST_ELEMENT_METADATA_KLASS),
         gst_element_factory_get_metadata(factory, GST_ELEMENT_METADATA_DESCRIPTION)
         );

  gst_object_unref(GST_OBJECT(factory));

  return 0;
}
