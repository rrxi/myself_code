/*
 * =====================================================================================
 *
 *       Filename:  kb-article.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月16日 16时50分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "kb-article.h"

G_DEFINE_TYPE(KbArticle, kb_article, KB_TYPE_BIBTEX);

#define KB_ARTICLE_GET_PRIVATE(object) (\
    G_TYPE_INSTANCE_GET_PRIVATE((object), KB_TYPE_ARTICLE, KbArticlePrivate))

enum PROPERTY_ARTICLE {
  PROPERTY_0;
  PROPERTY_TITLE;
  PROPERTY_AUTHOR;
  PROPERTY_PUBLISHER;
  PROPERTY_YEAR;
  PROPERTY_JOURNAL;
  PROPERTY_VOLUME;
  PROPERTY_NUMBER;
  PROPERTY_PAGES;
  N_PROPERTIES;
};

typedef struct _KbArticlePrivate KbArticlePrivate;
struct _KbArticlePrivate {
  GString *journal;
  GString *volume;
  GString *number;
  GString *pages;
};

static void kb_article_class_init(KbArticleClass *klass)
{
  g_type_class_add_private(klass, sizeof(KbArticlePrivate));

  GObjectClass *base_class = G_OBJECT_CLASS(klass);
  base_class->set_property = kb_article_set_property;
  base_class->get_property = kb_article_get_property;
}

static void kb_article_init(KbArticle *self)
{
}

static void kb_article_set_property(GObject object, guint property_id,
                                    const GValue *value, GParamSpec *pspec)
{
  KbArticle *self = KB_ARTICLE(object);
  KbArticlePrivate *priv = KB_ARTICLE_GET_PRIVATE(self);

  switch(property_id){
    case PROPERTY_TITLE:
      if(priv->title)
        g_string_free(priv->title, TRUE);
      priv->title = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_AUTHOR:
      if(priv->author)
        g_string_free(priv->author, TRUE);
      priv->author = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_PUBLISHER:
      if(priv->publisher)
        g_string_free(priv->publisher, TRUE);
      priv->publisher = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_YEAR:
      priv->year = g_value_get_uint(value);
      break;
    case PROPERTY_JOURNAL:
      if(priv->journal)
        g_string_free(priv->journal, TRUE);
      priv->journal = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_VOLUME:
      if(priv->volume)
        g_string_free(priv->volume, TRUE);
      priv->volume = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_NUMBER:
      if(priv->number)
        g_string_free(priv->number, TRUE);
      priv->number = g_string_new(g_value_get_string(value));
      break;
    case PROPERTY_PAGES:
      if(priv->pages)
        g_string_free(priv->pages, TRUE);
      priv->pages = g_string_new(g_value_get_string(value));
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
      break;
  }
}

static void kb_article_get_property(GObject *object, guint property_id,
                                    GValue *value, GParamSpec *pspec)
{
  KbArticle *self = KB_ARTICLE(object);
  KbArticlePrivate *priv = KB_ARTICLE_GET_PRIVATE(self);
  GString *similar = NULL;

  switch(property_id){
    case PROPERTY_TITLE:
      g_value_set_string(value, priv->title->str);
      break;
    case PROPERTY_AUTHOR:
      g_value_set_string(value, priv->author->str);
      break;
    case PROPERTY_PUBLISHER:
      g_value_set_string(value, priv->publisher->str);
      break;
    case PROPERTY_YEAR:
      g_value_set_uint(value, priv->year);
      break;
    case PROPERTY_JOURNAL:
      g_value_set_string(value, priv->journal->str);
      break;
    case PROPERTY_VOLUME:
      g_value_set_string(value, priv->volume->str);
      break;
    case PROPERTY_NUMBER:
      g_value_set_string(value, priv->number->str);
      break;
    case PROPERTY_PAGES:
      g_value_set_string(value, priv->pages->str);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
      break;
  }
}

void kb_article_printf(KbArticle *self)
{
  kb_bibtex_printf(&self->parent);
  gchar *journal, *volume, *number, *pages;
  g_object_get(G_OBJECT(self),
               "journal", &journal,
               "volume", &volume,
               "number", &number,
               "pages", &pages,
               NULL);
  g_printf("    Journal: %s\n"
           "     Volume: %s\n"
           "     Number: %s\n"
           "      Pages: %s\n", journal, volume, number, pages);
  g_free(journal);
  g_free(volume);
  g_free(number);
  g_free(pages);

}
