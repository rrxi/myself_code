/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  堆栈模块的接口
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 09时43分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

//堆栈所存储的值的类型
#define STACK_TYPE int

void push(STACK_TYPE value);

void pop(void);

STACK_TYPE top(void);

int is_empty(void);

int is_full(void);

//动态数组，创建堆栈，参数指定保存多少元素
void create_stack(size_t size);

//动态数组，销毁堆栈，释放堆栈所使用的内存
void destroy_stack(void);
