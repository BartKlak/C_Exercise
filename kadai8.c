#include <stdio.h>

int main(void)
{
int i=0, l;											/*introduces 0 value integer "i" and integer "l"*/
char *name[]={"Izumi","Kanto","Kudo","Sato","Sugawara","Matsuda","Wada", NULL};	/*introduces character array pointer "name"*/

while(name[i] != NULL)									/*a) loops until "name" points to NULL*/
{
while(*(name[i]+l) != '\0')									/*b) loops until value ponted by "name + l" becomes 0*/
{
l++;												/*adds 1 to "l" value each round*/
}												/*end of loop b)*/
printf("%sの長さは%dです。\n", name[i], l);							/*prints out content of "name" in order one at a time & the current value of "l" - length of given name*/
i++;												/*adds 1 to "i" value each round*/
l=0;												/*resets "l" value to 0*/
}												/*end of loop a)*/

  return 0;
}
