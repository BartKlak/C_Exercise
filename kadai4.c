#include <stdio.h>

int main(void)
{
  int x1, x2;                                             /*introduces integers "x1" and "x2"*/
  int *ptr1, *ptr2;                                       /*introduces pointers "ptr1" and "ptr2"*/

  ptr1=&x1;                                               /*"ptr1" points to the address of "x1"*/
  ptr2=&x2;                                               /*"ptr2" points to the address of "x2"*/

  printf("x1を入力してください\n");                          /*prints out "x1を入力してください" line*/
  scanf("%d",ptr1);                                       /*scans data pointed by "ptr1" that points to "x1"*/

  printf("x2を入力してください\n");                          /*prints out "x2を入力してください" line*/
  scanf("%d",ptr2);                                       /*scans data pointed by "ptr2" that points to "x2"*/

  printf("x1とx2の合計値は%dです。\n", *ptr1+*ptr2);         /*prints out "x1とx2の合計値は です。" line and fills the blank by the sum of values of "x1" and "x2" pointed accordingly by "ptr1" and "ptr2"*/

  return 0;
}
