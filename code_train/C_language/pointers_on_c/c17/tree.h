/*
 * =====================================================================================
 *
 *       Filename:  tree.h
 *
 *    Description:  二叉搜索树的接口
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 14时36分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#define TREE_TYPE int

void insert(TREE_TYPE value);

TREE_TYPE *find(TREE_TYPE value);

void pre_order_traverse(void (*callback)(TREE_TYPE value));
