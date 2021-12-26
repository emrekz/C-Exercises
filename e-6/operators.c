#include <stdio.h>

int main() {
  int a = 1;
  int b = 5;
  int c = 3;
  printf("++a = %d\n", ++a);
  printf("b++ = %d\n", b++);  // increment work after the print operation
  printf("b = %d\n", b);  // value of c increasead
  printf("--c = %d\n", --c);
  
  int x = 6;
  int y = 4;
  float z = x/y;
  float f_x = 6;
  float f_y = 4;
  printf("6 / 4 = %d\n", 6/4);
  printf("6 / 4 = %f\n", z);
  printf("6 / 4 = %.3f\n", f_x/f_y);

  int x_2 = 21;
  int y_2 = 3;
  x_2 *= y_2;
  float x_3 = 20;
  x_3 /= 3;
  printf("x_2 = %d\n", x_2);
  printf("x_3 = %.3f\n", x_3);
  
  return 0;
}