#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a, *x, i, sum=0;
x=(int*)malloc(sizeof(int)*a);

printf("配列のサイズを入力してください\n");
scanf("%d", &a);
           

for(i=0;i<a;i++)
{
printf("%dつ目の整数を入力してください\n", i+1);
scanf("%d", x+i);
sum=sum+*(x+i);
}

printf("入力された配列は｛");
for(i=0;i<a;i++)
{
printf("%d", *(x+i));
if(i<(a-1))
{
printf(",");
}
}
printf("}です。\n");


  for(i=0;i<a-1;i++)
    {
while(*(x+i)!=*(x+i+1))
{
  if(*(x+i)>*(x+i+1))
    	
      *(x+i)=*(x+i)-*(x+i+1);
	
  else if(*(x+i)<*(x+i+1))
   	
      *(x+i+1)=*(x+i+1)-*(x+i);   
	
  else 
	
	break;
	
}
}
printf("配列の要素の最大公約数は%dです。\n", *(x+i));

free(x);
  return 0;
}
