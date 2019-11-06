/*
 * =====================================================================================
 *
 *       Filename:  my-iusb.c
 *
 *    Description:  achieve my-iusb.h
 *
 *        Version:  1.0
 *        Created:  2019年05月21日 09时56分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include "my-iusb.h"

G_DEFINE_INTERFACE(MyIUsb, my_iusb, G_TYPE_INVALID);

static void my_iusb_default_init(MyIUsbInterface *iface)
{

}

gchar * my_iusb_read(MyIUsb *self)
{
  g_return_if_fail(MY_IS_IUSB(self));
  MY_IUSB_GET_INTERFACE(self)->read(self);
}

void my_iusb_write(MyIUsb *self, const gchar *str)
{
  g_return_if_fail(MY_IS_IUSB(self));
  MY_IUSB_GET_INTERFACE(self)->write(self, str);
}
