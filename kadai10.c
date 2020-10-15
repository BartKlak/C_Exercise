#include <stdio.h>
#include <stdlib.h>

/*defines a structure keisoku*/
struct keisoku {
  char name[20];
  int age;
  int height;
  int weight;
} person [25];


/*main function*/
int main(void){

  /*opens the file*/
  FILE *fp;
  char filename[10];
  printf("ファイル名を入力して下さい\n");
  scanf("%s", filename);
  int n,i,j;
  if((fp=fopen(filename,"r"))==NULL){
    fprintf(stderr, "File open error\n");
    exit(1);
  }

  /*scans the file*/
  fscanf(fp,"%d",&n);
  for(i=0;i<25;i++){
    fscanf(fp,"%s %d %d %d", person[i].name, &person[i].age, &person[i].height, &person[i].weight);
  }

  int k;	  
  double sum=0, mus=0, count=0;
  double a, b;
  fclose(fp);

  /*counts the averages of height and weight in regard to the age spectrum*/
  for(k=1;k<6;k++){
  for(j=0;j<25;j++){
    if(person[j].age<=((k*10)+9) && person[j].age>=(k*10)){
    sum=sum+person[j].height;
    mus=mus+person[j].weight;
    count++;
  }
  }
  a=sum/count;
  b=mus/count;
  	if(((10*a)-(int)10*a)<0.5){
  	printf("%d代の身長の平均は%.1fです\n",k*10, a-0.05);
  	}
  	else{
  	printf("%d代の身長の平均は%.1fです\n",k*10, a );
	}  

	if(((10*b)-(int)10*b)<0.5){
	printf("%d代の体重の平均は%.1fです\n",k*10, b-0.05);
  	}
	else{
  	printf("%d代の身長の平均は%.1fです\n",k*10, b );
	}  
sum=0;
mus=0;
count=0;
}


  return 0;
}
