/*
 ============================================================================
 Name        : queue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int rear=-1,front=0,a[50],item,lim;
void enq();
void deq();
void peek();
void display();
void main() {
    int choice;
    setbuf(stdout,NULL);
    printf("enter the limit:");
    scanf("%d",&lim);
    while(choice!=5)
    {
     printf("which operation do u want to perform\n1.enqueue 2.dequeue 3.peek 4.display 5.exit\nchoice:\n");
     scanf("%d",&choice);
     switch(choice)
      {
        case 1:
        {
            enq();
            break;
        }
        case 2:
        {
            deq();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
      }
    }
}
void enq()
{
    if(rear==lim-1){
        printf("overflow\n");
    }
    else
    {
        rear=rear+1;
        printf("enter the number:");
        scanf("%d",&item);
        a[rear]=item;
    }
}
void deq()
{
    if(rear<front)
    {
        printf("underflow");
    }
    else
    {
        item=a[front];
        front=front+1;
    }
}
void peek()
{
    printf("topmost element=%d\n",a[front]);
}
void display()
{
    int i;
    printf("elements in queue:");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
        printf("\n");
    }
}
