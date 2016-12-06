/*Data structure Lab
 Program No. 11
 Topic: Program to implement queue
 using array*/

#include<stdio.h>
#include<conio.h>
#define max 20
int A[max];
int front,rear;                        //Global Variables
void Insert();
void Del();
void Display();

int main()
{
 int ch;
 clrscr();
 front=0;
 rear=0;
 printf("\nMenu:\n1.Insert\n2.Delete\n3.Display\n4.Exit");
 do
 {  printf("\nEnter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:Insert();break;
    case 2:Del();break;
    case 3:Display();
    case 4:break;
    default:printf("\nWrong choice!!");
    getch();
   }
 }while(ch!=4);
 return 0;
}
void Insert()
{
 if(rear==max)
 printf("\nQueue overflown");
 else
 { printf("\nEnter element to insert:");
   scanf("%d",&A[rear]);
   ++rear;
 }
}

void Del()
{
 if(front==rear)
 printf("\nDeletion not possible..\nQueue is empty");
 else
 {
   printf("\n%d deleted",A[front]);
   front++;
  }
}

void Display()
{
 int i;
 printf("\nQueue content:");
 for(i=front;i<rear;++i)
 printf("%d ",A[i]);
}
