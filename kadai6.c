#include <stdio.h>

int main(void)
{
int *p, x[5], i;                    /*introduces integer pointer "p", integer array "x" of size 5 and integer "i"*/
p = x;                              /*pointer "p" points to the first value of array "x" which is at "x[0]"*/

for(i=0;i<5;i++)                    /*loops for "i" values from 0 to 4 increasing by 1 after each loop*/
{
printf("%dつ目の整数を入力してください\n", i+1);   /*prints out " つ目の整数を入力してください" line and fills the blank with current "i+1" value*/
scanf("%d", p+i);                             /*scans data pointed by "p+i" that points to "x[i]"*/
}

printf("入力された配列は｛%d,%d,%d,%d,%d｝です。\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));    /*prints out "入力された配列は｛ , , , , ｝です。" line and fills the blanks with values pointed by "p+i" for increasing value of "i"*/
printf("配列の要素の和は%dです。\n", *p+*(p+1)+*(p+2)+*(p+3)+*(p+4));                  /*prints out "配列の要素の和は です。" line and fills the blank by the sum of values of "x[i]" pointed by "p+i"*/

  return 0;
}
