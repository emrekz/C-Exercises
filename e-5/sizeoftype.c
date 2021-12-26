#include <stdio.h>

int main(){
  int a;
  float b;
  double c;
  char d;
  // size of type not alwasys same, it's byte size varies from machine to machine
  printf("size of int : %d byte\nsize of float : %d byte\nsize of double : %d byte\nsize of char : %d byte\n", sizeof(a), sizeof(b), sizeof(c),sizeof(d));

  printf("unsigned char %d byte - signed char %d byte\n", sizeof(unsigned char), sizeof(signed char));
  printf("unsigned int %d byte - signed int %d byte\n", sizeof(unsigned int), sizeof(signed int));
  printf("short int %d byte - long int %d byte\n", sizeof(short int), sizeof(long double));
  printf("long double %d byte", sizeof(long double));
  return 0;
}