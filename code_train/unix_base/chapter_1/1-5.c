/*
 * 获取用户的输入存在对应的文件中
 * 标准输入输出
 * */
#include "../apue.h"

int main(void) {
  int c;

  while ((c=getc(stdin)) != EOF) {
    if (putc(c, stdout) == EOF)
      err_sys("output error");
  }

  if (ferror(stdin))
    err_sys("input error");

  exit(0);
}
