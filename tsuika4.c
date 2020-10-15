#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i=0,j, l=0;
char *name[10];

 for(j=0; j<10; j++)
   {
name[j]=(char*)malloc(sizeof(char)*30);
scanf("%s", &name[j][0]);
 if(*(name[j])=='E'&&*(name[j]+1)=='N'&&*(name[j]+2)=='D')
   {
     break;
   }
   }

 for(i=0; i<10; i++)
{
 if(*(name[i])=='E'&&*(name[i]+1)=='N'&&*(name[i]+2)=='D')
   {
     break;
   }
while(*(name[i]+l) != '\0')
{
l++;
}

printf("%sの長さは%dです。\n", name[i], l);
l=0;
}

  return 0;
}
