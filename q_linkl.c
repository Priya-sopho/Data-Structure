/*Data Structure Lab
 Program NO.12
 Topic:Program to implement queue using link list
 */
#include<stdio.h>
#include<conio.h>

struct node
{
  int data;
  struct node*next;
};
void Insert_node(struct node **s,struct node **e,int x);
void Delete_node(struct node **s,struct node**e,int x);
void display(struct node *s);

main()
{ struct node *start,*end;
 int ch,x;
 clrscr();
 start=NULL;
 end=NULL;
 printf("\nLink List Program");
 printf("\nMenu:\n1.Insert in Queue\n2.Delete a node\n3.Display\n4.Exit");
do
{ printf("\nEnter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:{ printf("\nEnter data:");
	  scanf("%d",&x);
	  Insert_node(&start,&end,x);
	  }break;
 case 2:Delete_node(&start,&end,x);break;
 case 3:display(start);
 case 4:break;
 default:printf("\nWrong Choice !!");
 }
getch();
}while(ch!=4);
return 0;
}


void Insert_node(struct node **s,struct node **e,int x)
{
 struct node *p;
 p=(struct node*)malloc(sizeof(struct node));
 p->data=x;
 p->next=NULL;
 if(*s==NULL)
 *s=p;
  else
 (*e)->next=p;
 *e=p;        //Change end pointer to p
}

void Delete_node(struct node **s,struct node **e,int x)
{
 struct node *p;
 if(*s==NULL)
 {printf("\nEmpty Link list Queue");
  return;
  }
 p=*s;
 *s=(*s)->next;
 printf("%d deleted",p->data);
 free(p);
}

void display(struct node *s)
{
 printf("\nLink List Content:");
  while(s!=NULL)
 { printf("%3d",s->data);
   s=s->next;
 }
 }
