#include <stdio.h>
#include <stdlib.h>
#define N 25

/*defines a structure keisoku*/
struct keisoku {
  char name[20];
  int age;
  int height;
  int weight;
} *person;

/*defines swaping function*/
void perm(struct keisoku * A, struct keisoku * B){
  struct keisoku temp;
  temp = *A;
  *A = *B;
  *B = temp;
}

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

  /*allocates memory dynamicaly*/
  if((person=(struct keisoku *)malloc( sizeof(struct keisoku )))==NULL){
    fprintf( stderr, "memory allocation fault.\n");
    exit (1);
  }

  /*scans the file*/
  fscanf(fp,"%d",&n);
  for(i=0;i<n;i++){
    fscanf(fp,"%s %d %d %d", person[i].name, &person[i].age, &person[i].height, &person[i].weight);
  }
	  
  fclose(fp);

  /*sorts by height*/
  for(i=0;i<n;i++){
    for(j=0;j<n-1-i; j++){
      if(person[j].height < person[j+1].height){
	perm(&person[j],&person[j+1]);
      }
    }
}


/*prints out nearby values*/

  int k, head, tail, mid;
  printf("身長を入力してください\n");
  scanf("%d",&k);

  head=0; tail= N-1;
  while (head<=tail){
    mid = (head+tail)/2;
    if(person[mid].height == k) 
	{
	break;
	}
    if(person[mid].height > k) {
      head = mid + 1;
    } 
     else {
      tail = mid - 1;
    }
}

for(i=0; i<=24; i++){
if (person[i].height==person[mid].height){
  printf("%s(%d) %d[cm] %d[kg]\n", person[i].name, person[i].age, person[i].height, person[i].weight);
  }
}
  

 return 0;
  }
