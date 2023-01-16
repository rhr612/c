#include<stdio.h>
int main() {
  int a,b,c;
  printf("Enter variable a: ");
  scanf("%d", &a); //a input inisi
  printf("Enter variable b: ");
  scanf("%d", &b);  // b imput nisi


  c=a;   // a er value c er vitor store korsi

  a = b;
  b = c;

  printf ("\n");
  printf ("After swapping\n");
  printf("a = %d\n", a);
  printf("b = %d", b);
  return 0;
}
