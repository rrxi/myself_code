/*
 * =====================================================================================
 *
 *       Filename:  test5.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 11时31分05秒
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
#include <math.h>
struct complex_struct {
  double x, y;
};

//返回实部
double real_part(struct complex_struct z){
  return z.x;
}

//返回虚部
double img_part(struct complex_struct z){
  return z.y;
}

//返回大小
double magnitude(struct complex_struct z){
  return sqrt(z.x * z.x + z.y * z.y);
}

//返回角度
double angle(struct complex_struct z){
  return atan2(z.y, z.x);
}

//直角坐标
struct complex_struct make_from_real_img(double x, double y){
  struct complex_struct z;
  z.x = x;
  z.y = y;
  return z;
}

//极坐标
struct complex_struct make_from_mag_ang(double r, double A){
  struct complex_struct z;
  z.x = r * cos(A);
  z.y = r * sin(A);
  return z;
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2){
  return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2){
  return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2){
  return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2){
  return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

void print_complex(struct complex_struct z){
  if(real_part(z) == 0 && img_part(z) == 0){
    printf("0\n");
  }else if(real_part(z) == 0)
    printf("%fi\n", img_part(z));
  else if(img_part(z) == 0)
    printf("%f\n", real_part(z));
  else
    printf("%f+%fi\n", real_part(z), img_part(z));
}

int main(void){
  struct complex_struct z1 = {1, -2.3};
  struct complex_struct z2 = {0, -2.3};
  struct complex_struct z3 = {1, 0};
  struct complex_struct z4 = {0, 0};
  print_complex(z1);
  print_complex(z2);
  print_complex(z3);
  print_complex(z4);
  print_complex(add_complex(z1, z2));
}
