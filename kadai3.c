#include <stdio.h>

int main(void)
{
  int sum=0, a, i;                              /*introduces integers "sum" with its initial value set at 0, "i" and "a"*/
  int *p;                                       /*introduces pointer "p"*/

  p=&sum;                                       /*"p" points to the address of "sum"*/
  printf("aを入力してください\n");                 /*prints out "aを入力してください" line*/
  scanf("%d",&a);                               /*scans data of "a"*/

  for(i=1;i<=a;i++)                             /*loops for "i" values from 1 to "a" value*/
    {
      *p=*p+i;                                  /*adds "i" value to the value pointed by "p" every round*/
    }

  printf("1から%dまでの和は%dです。\n",a,*p);       /*prints out the results*/
  return 0;
}
