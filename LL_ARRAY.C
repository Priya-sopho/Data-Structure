/*Data Structure Lab
 Program NO.13
 Topic:Program to implement link list using array
 This program is going to store in array form
 and linking data in ascending order.
 */
#include<stdio.h>
#include<conio.h>
#define max 20

struct node
{
  int data;
  struct node*next;
}A[max];

void Insert_node(struct node **s,struct node* x);
void Delete_node(struct node **s);
void display_node(struct node *s);
void display_array(int);

main()
{ struct node *start;
 int ch,x,i;
 clrscr();
 start=NULL;
 i=0;
 printf("\nLink List using array Program");
 printf("\nThis program contains array of node\nand nodes are linked");
 printf(" in ascending order");
 printf("\nMenu:\n1.Insert in Array\n2.Delete a node\n3.Display link list");
 printf("\n4.Dispalay Array\n5.Exit");
do
{ printf("\nEnter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:{ if(i==max)
	  {printf("\nArray completely full");
	  break;
	  }
	  printf("\nEnter data:");
	  scanf("%d",&A[i].data);
	  Insert_node(&start,&A[i]);
	  ++i;
	  }break;
 case 2:Delete_node(&start);break;
 case 3:display_node(start);break;
 case 4:display_array(i);
 case 5:break;
 default:printf("\nWrong Choice !!");
 }
getch();
}while(ch!=5);
return 0;
}


void Insert_node(struct node **s,struct node * x)
{
 x->next=NULL;
 if(*s==NULL)
 *s=x;
  else
  { if(x->data<(*s)->data)
   { x->next=*s;
      *s=x;
      return;
    }
   else
   { struct node *p;
     p=*s;
     while(p->next!=NULL)
     { if(x->data<(p->next)->data)
       {  x->next=p->next;
	  p->next=x;
	  return;
	}
       else
       p=p->next;
     }
     p->next=x;
  }
}
}

void Delete_node(struct node **s)
{
 struct node *p;
 if(*s==NULL)
 {printf("\nEmpty Link list\nDeletion not possible");
  return;
  }
 p=*s;
 *s=(*s)->next;
 printf("%d deleted",p->data);
 printf("\nNOTE:A node deleted does'nt implies\n deletion from array.");
}


void display_node(struct node *s)
{
 printf("\nLink List Content:");
  while(s!=NULL)
 { printf("%3d",s->data);
   s=s->next;
 }
 }
void display_array(int n)
{
  int i;
  printf("\nArray Content:");
  for(i=0;i<n;++i)
  printf("%d ",A[i].data);
 }