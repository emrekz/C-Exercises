#include <stdio.h>

int main(){
  int a;
  a = 5;
  printf("value of a is %d", a);

  // a = 2.1;   
  /* 
    this declaration is false and bring us an error. 
    2.1 is float and a is integer so a correspond stuation is appearing
  */

  // float a;
  /* 
    error.
    a already declarated before  
  */

 float b = 4.2;
 b = 3.8; //  this is correct. A value can be change with same data type.
 printf("\nvalue of b is %.2f", b);

}