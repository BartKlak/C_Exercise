#include <stdio.h>

void swap (int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}


void rev_intarray(int *vc, int n){
  int i;
  for (i=0;i<(n/2);i++){
  swap (&vc[i], &vc[n-i-1]);
  }
  }

int main(void){

  int vc, i, g[5];
  for(i=0;i<5;i++){
    printf("%dつめの整数を入力してください\n", i+1);
    scanf("%d",&g[i]);   
}

  printf("入力された配列の逆順は{");
  rev_intarray(&g[0], 5);
  for(i=0;i<4;i++)
    {
      printf("%d,",g[i]);
}
  printf("%d",g[4]);
  printf("}です\n");

  return 0;

}
