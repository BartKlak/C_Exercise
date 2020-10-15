#include <stdio.h>

int main(void)
{
  double x, y;                          /*introduces real numbers "x" and "y"*/
  double *p, *q;                        /*introduces pointers "p" and "q"*/

  p=&x;                                 /*"p" points to the address of "x"*/
  q=&y;                                 /*"q" points to the address of "y"*/
  printf("xを入力してください\n");         /*prints out "xを入力してください" line*/
  scanf("%lf", &x);                     /*scans data of "x"*/
  printf("yを入力してください\n");         /*prints out "yを入力してください" line*/
  scanf("%lf", &y);                     /*scans data of "y"*/

  printf("x+y=%g\n", *p+*q);            /*prints out "x+y=" line and the sum of values of "x" and "y" pointed accordingly by "p" and "q"*/

  return 0;
}
