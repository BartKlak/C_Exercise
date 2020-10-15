#include <stdio.h>
#include <stdlib.h>                                              /*library that contains functions malloc, free*/

int main(void)
{
  double *x, *y;                                                 /*introduces pointers "x" and "y"*/

  if ((x=(double*)malloc(sizeof(double)))==NULL)                 /*allocates a block of SIZE OF VALUE POINTED BY "X" bytes of memory*/
    {
      fprintf(stderr,"memory allocation fault.\n");              /*if it happens to be a null pointer (size is 0) it prints out the error warning...*/
      exit (1);                                                  /*..and shuts down the programm*/
    }

  if ((y=(double*)malloc(sizeof(double)))==NULL)                 /*allocates a block of SIZE OF VALUE POINTED BY "Y" bytes of memory*/
    {
      fprintf(stderr,"memory allocation fault.\n");              /*if it happens to be a null pointer (size is 0) it prints out the error warning...*/
      exit (1);                                                  /*..and shuts down the programm*/
    }

  printf("xを入力してください\n");                                   /*prints out "xを入力してください" line*/
  scanf("%lf", x);                                                /*scans data pointed by "x"*/

  printf("yを入力してください\n");                                   /*prints out "yを入力してください" line*/
  scanf("%lf", y);                                                /*scans data pointed by "y"*/

  printf("xとyの合計値は%gです。\n", *x+*y);                         /*prints out "xとyの合計値は です。" line and fills the blank by the sum of values pointed by "x" and "y"*/

  free(x);                                                        /*releases the memory that was allocated to the value pointed by "x"*/
  free(y);                                                        /*releases the memory that was allocated to the value pointed by "y"*/
  return 0;
}
