/*
 * =====================================================================================
 *
 *       Filename:  2_11_1.c
 *
 *    Description:  标准I/O库函数综合练习题一
 *                  每隔1秒向文件中写入一行记录
 *                  该程序应该无限循环，直到按Ctrl- C终止。
 *                  下次再启动程序时在test.txt文件末尾追加记录，
 *                  并且序号能够接续上次的序号
 *
 *        Version:  1.0
 *        Created:  2019年06月20日 10时18分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

char *log_text(int id, struct tm *tmp_ptr){
  char *log;
  char ID[12];
  char year[20];
  char month[12];
  char day[12];
  char hour[12];
  char min[12];
  char sec[12];
  snprintf(ID, 12, "%d", id);
  snprintf(year, 20, "%d", tmp_ptr->tm_year+1900);
  snprintf(month, 12, "%d", tmp_ptr->tm_mon+1);
  snprintf(day, 12, "%d", tmp_ptr->tm_mday);
  snprintf(hour, 12, "%d", tmp_ptr->tm_hour);
  snprintf(min, 12, "%d", tmp_ptr->tm_min);
  snprintf(sec, 12, "%d", tmp_ptr->tm_sec);
  strcpy(log, ID);
  strcat(log, "\t");
  strcat(log, year);
  strcat(log, "-");
  strcat(log, month);
  strcat(log, "-");
  strcat(log, day);
  strcat(log, "\t");
  strcat(log, hour);
  strcat(log, ":");
  strcat(log, min);
  strcat(log, ":");
  strcat(log, sec);
  strcat(log, "\n");
  return log;
}

int main(void){
  FILE *fp;
  char *filename = "text.txt";
  time_t tmpcal_ptr;
  struct tm *tmp_ptr = NULL;
  char a[1024];
  char *token;
  int id = 0;
  char *log;

  if((fp=fopen(filename, "r"))==NULL){
    perror("Open file:\n");
    exit(1);
  }

  printf("open file\n");

  while(!feof(fp)){
    fgets(a, sizeof(a), fp);
    id++;
  }

  fclose(fp);

  id--;

  if((fp=fopen(filename, "a"))==NULL){
    perror("Open file:\n");
    exit(1);
  }

  //rewind(fp);

  printf("out id %d\n",id);

  while(1){
    id++;
    time(&tmpcal_ptr);
    tmp_ptr = localtime(&tmpcal_ptr);
    printf("time: %ld\n", tmpcal_ptr);
    log = log_text(id, tmp_ptr);
    printf("log: %s\n", log);
    fputs(log, fp);
    fflush(fp); //没有这一句就写不进文件里，I/O缓冲区
    sleep(1);
  }

  fclose(fp);
  return 0;

}
