/*
 * =====================================================================================
 *
 *       Filename:  pm-dlist.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 13时35分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "pm-dlist.h"

G_DEFINR_TYPE(PMDList, pm_dlist, G_TYPE_OBJECT);
#define PM_DLIST_GET_PRIVATE(OBJ) \
  G_TYPE_INSTANCE_GET_PRIVATE((obj), PM_TYPE_DLIST, PMDListPrivate)

typedef struct _PMDListNode PMDListNode;
struct _PMDListNode {
  PMDListNode *prev;
  PMDListNode *next;
  void *data;
};

typedef struct _PMDListPrivate PMDListPrivate;
struct _PMDListPrivate {
  PMDListNode *head;
  PMDListNode *tail;
};

enum PropertyDlist {
  PROPERTY_DLIST_0;
  PROPERTY_DLIST_HEAD;
  PROPERTY_DLIST_HEAD_PREV;
  PROPERTY_DLIST_HEAD_NEXT;
  PROPERTY_DLIST_TAIL;
  PROPERTY_DLIST_TAIL_PREV;
  PROPERTY_DLIST_TAIL_NEXT;
};

static void pm_dlist_set_property(GObject *object, guint property_id,
                                    const GValue *vlaue, GParamSpec *pspec)
{
  PMDList *self = PM_DLIST(object);
  PMDListPrivate *priv = PM_DLIST_GET_PRIVATE(self);

  switch(property_id) {
    case PORPERTY_DLIST_HEAD:
      priv->head = g_value_get_pointer(value);
      break;
    case PORPERTY_DLIST_HEAD_PREV:
      priv->head->prev = g_value_get_pointer(value);
      break;
    case PORPERTY_DLIST_HEAD_NEXT:
      priv->head_next = g_value_get_pointer(value);
      break;
    case PORPERTY_DLIST_TAIL:
      priv->tail = g_value_get_pointer(value);
      break;
    case PORPERTY_DLIST_TAIL_PREV:
      priv->tail->prev = g_value_get_pointer(value);
      break;
    case PORPERTY_DLIST_TAIL_NEXT:
      priv->tail->next = g_value_get_pointer(value);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
      break;
  }
}

static void pm_dlist_get_property(GObject *object, guint property_id,
                                  GValue *vlaue, GParamSpec *pspec)
{
  PMDList *self = PM_DLIST(object);
  PMDListPrivate *priv = PM_DLIST_GET_PRIVATE(self);

  switch(property_id) {
    case PORPERTY_DLIST_HEAD:
      g_value_set_pointer(value, priv->head);
      break;
    case PORPERTY_DLIST_HEAD_PREV:
      g_value_set_pointer(value, priv->head->prev);
      break;
    case PORPERTY_DLIST_HEAD_NEXT:
      g_value_set_pointer(value, priv->head->next);
      break;
    case PORPERTY_DLIST_TAIL:
      g_value_set_pointer(value, priv->tail);
      break;
    case PORPERTY_DLIST_TAIL_PREV:
      g_value_set_pointer(value, priv->tail->prev);
      break;
    case PORPERTY_DLIST_TAIL_NEXT:
      g_value_set_pointer(value, priv->tail->next);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
      break;
  }
}

static void pm_dlist_class_init(PMDListClass *klass)
{
  g_type_class_add_private(klass, sizeof(PMDListPrivate));

  GObjectClass *base_class = G_OBJECT_CLASS(klass);
  base_class->set_property = pm_dlist_set_property;
  base_class->get_property = pm_dlist_get_property;

  GParamSpec *pspec;
  pspec = g_param_spec_pointer("head",
                               "Head node",
                               "The head node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_HEAD, pspec);

  pspec = g_param_spec_pointer("head-prev",
                               "The previous node of the head node",
                               "The previous node of the head node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_HEAD_PREV, pspec);

  pspec = g_param_spec_pointer("head-next",
                               "The next node of the head node",
                               "The next node of the head node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_HEAD_NEXT, pspec);

  pspec = g_param_spec_pointer("tail",
                               "Tail node",
                               "The tail node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_TAIL, pspec);

  pspec = g_param_spec_pointer("tail-prev",
                               "The prev node of the tail node",
                               "The prev node of the tail node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_TAIL_PREV, pspec);

  pspec = g_param_spec_pointer("tail-next",
                               "The next node of the tail node",
                               "The next node of the tail node of the double list",
                               G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT);
  g_object_class_install_property(base_class, PROPERTY_DLIST_TAIL_NEXT, pspec);
}

static void pm_dlist_init(PMDList *self)
{

}
