#include <stdio.h>
#include <stdlib.h>							/*library that contains functions malloc, free*/
#define N 51								/*limits character amount to 50*/

int main(void)
{
  char *ptr;								/*introduces character pointer "ptr"*/
  int count=0;							/*introduces integer "count" and sets it on value 0*/

  if((ptr=(char*)malloc(N*sizeof(char)))==NULL)			/*allocates a block of memory POINTED BY "ptr"*/
    {
      fprintf(stderr, "memory allocation fault.\n");		/*if it happens to be a null pointer (size is 0) it prints out the error warning...*/
      exit (1);							/*..and shuts down the programm*/
    }

  printf("50文字以下の文字列を入力してください\n");			/*prints out "50文字以下の文字列を入力してください" line*/
  scanf("%[^\n]%*c", ptr);						/*scans data pointed by "ptr"*/
  while (*ptr != '\0')						/*loops until NULL pointer "ptr" appears*/
    {
      ptr++;								/*adds 1 to the "ptr" value each round*/
      count++;							/*adds 1 to the "count" value each round*/
    }
 
  printf("50文字以下の文字列を入力してください");			/*prints out "50文字以下の文字列を入力してください" line*/
  while(count != 0)							/*loops until "count" value is 0*/
    {
     ptr--;								/*subtracts 1 from the "ptr" value each round*/
     printf("%c",*ptr);						/*prints out the current "ptr" data(character)*/
     count--;								/*subtracts 1 from the "count" value each round*/
    }
  printf("です。\n");							/*prints out "です。" line*/

  free(ptr);								/*releases the memory that was allocated to the value pointed by "ptr"*/
  return 0;
}
