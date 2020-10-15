#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
  char name[20];
  int age;
  struct list *next;
};

int main(void){
  struct list *head=NULL;
  struct list *dummy, *new, *prev, *current, *p;

  dummy=(struct list*) malloc(sizeof(struct list));
  strcpy(dummy->name,"");
  dummy->age=0;
  dummy->next=NULL;
  head=dummy;

  while((new=(struct list*)malloc(sizeof(struct list)))){
    printf("氏名と年齢をスペースで区切って入力して下さい\n");
    if(scanf("%s%d", new->name, &new->age)==EOF)break;
    current=head;
    prev=head;


  
 printf("現在のリスト\n");
   new = head;

    while(current!=NULL){
 printf("%s %d\n", new->name, new->age);
      prev=current;
      current=current->next;
  new=new->next;
    }

    new->next=current;
    prev->next=new;
 new->next =head;
    head =new;

  
  
    /*  
    new=new->next;


  new->next =head;
    head =new;


while((new=(struct list *)malloc(sizeof(struct list)))){
   printf("氏名と年齢をスペースで区切って入力して下さい\n");
    if(scanf("%s%d", new->name, &new->age)==EOF)break;

    current=head;
    prev=head;



    while(current!=NULL){
      prev=current;
      current=current->next;
    }
    new->next=current;
    prev->next=new;
    new->next = head;
    head = new;
  }
  new= head;
 printf("現在のリスト\n");
  while (new!=NULL){
    printf("%20s %d\n", new->name, new->age);
    new=new->next;
    }*/

    /*  printf("現在のリスト\n");
   new = head;
    while(new!=NULL){
    printf("%s %d\n", new->name, new->age);
    new=new->next;
    }*/
  }
    
  return 0;
}
   
  /*
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

 return 0;
}
  */
/* struct list *head = NULL;
  struct list *p;

  while((p=(struct list *)malloc(sizeof(struct list)))){
    if(scanf("%s%d", p->name, &p->age)==EOF)break;
    p->next = head;
    head = p;
  }
  p= head;
  while (p!=NULL){
    printf("%20s %d\n", p->name, p->age);
    p=p->next;
  }
  return 0;
  }*/
