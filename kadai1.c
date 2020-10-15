#include <stdio.h>

int main(void)
{
  int i;                                                /*introduces integer "i"*/
  int *p;                                               /*introduces pointer "p"*/

  p=&i;                                                 /*"p" points to the address of "i"*/
  scanf("%d",&i);                                       /*scans data of "i"*/
  printf("i=%d\n&i=%p\n*p=%d\np=%p\n", i, &i, *p, p);   /*prints out values of "i" and "*p", address of "i" and the contents of "p"*/

  return 0;
}
