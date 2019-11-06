/*
 * =====================================================================================
 *
 *       Filename:  gst_init_easy.c
 *
 *    Description:  Simple initialization gst
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 11时17分03秒
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
  const gchar *nano_str;
  guint major, minor, micro, nano;

  gst_init(&argc, &argv);

  gst_version(&major, &minor, &micro, &nano);

  if(nano == 1)
    nano_str = "(CVS)";
  else if (nano == 2)
    nano_str = "(Prerelease)";
  else
    nano_str = "";

  printf("This program is linked against GStreamer %d.%d.%d %s\n",
      major, minor, micro, nano_str);

  return 0;
}
