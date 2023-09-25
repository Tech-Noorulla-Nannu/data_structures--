//PROGRAM 1(A)
//WRITE A PROGRAM CREATE A STACK USING ARRAY.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX],top=-1;
void push();
void pop();
void display();

int main()
{
  int choice,quit=1;
  clrscr();
  printf("\n------------STACK USING ARRAY-----------\n***************MAIN_MENU*************");
  printf("\nCLICK 1.PUSH OR INSERTED\nCLICK 2.POP OR DELETED\nCLICK 3.DISPLAY\n4.QUIT");
  while(quit!=0)
  {
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	push();
	break;
      case 2:
	pop();
	break;
      case 3:
	display();
	break;
      case 4:
	quit=0;
	break;
      default:
	printf("\nINVALID CHOICE");
    }
  }
  getch();
  return 0;
}


//push operation---------
void push()
{
	int value;
	if(top==MAX-1)
	{
	  printf("\nSTACK IS FULL--------------");
	}else{
	      printf("\nENTER AN ELEMENT TO BE PUSH: ");
	      scanf("%d",&value);
	      stack_arr[++top]=value;
	      printf("INSERTED SUCCESSFULLY----");
	      }
}

//pop operation------------
void pop()
{
    if(top==-1)
    {
      printf("\nSTACK IS EMPTY");
    }else{
	printf("\nPOPPED SUCCESSFULLY--------");
	printf("\nPOPPED ELEMENT IS %d: ",stack_arr[top]);
	top--;
	}
}


//display operations------------
void display()
{
  int i;
  if(top>=0)
  {
	printf("\nELEMENTS ARE: ");
	for(i=top;i>=0;i--)
	{
		printf("\t%d",stack_arr[i]);
	}
  }else{
       printf("\nSTACK IS EMPTY");
       }
}



-----------------------------------------------------------------------------------------------------------------------------

//PROGRAM 2(A)--------------
//CREATE A QUEUE USING ARR
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue_arr[MAX_SIZE],front=-1,rear=-1;

void enqueue();
void dequeue();
void display();

void main()
{
	int choice;
	clrscr();
	printf("\n**************QUEUE USING ARRAY***************");
	printf("\n-----THE MAIN MENU IS-----");
	printf("\nCLICK 1.ENQUEUE OR INSERT \nCLICK 2.DEQUEUE OR DELETE CLICK \n3.DISPLAY CLICK \n4.EXIT");
	while(1)
	{
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			    enqueue();
			    break;
			case 2:
			    dequeue();
			    break;
			case 3:
			    display();
			    break;
			case 4:
			    exit(0);
			default:
			   printf("\nINVALID CHOICE");
		}
	}
}

//enqueue operation()
void enqueue()
{
	int value;
	printf("\nENTER AN ELEMENT: ");
	scanf("%d",&value);
	if(rear==MAX_SIZE-1)
	{
	  printf("\nQUEUE IS FULL");
	}else if(front==-1 && rear==-1)
		 {
		   front=0;
		   rear=0;
		 }
	else{
	    rear++;
	    }
    queue_arr[rear]=value;
}

//dequeue operation----
void dequeue()
{
	if(front==-1)
	{
		printf("\nQUEUE IS EMPTY");
	}else{
	    printf("\nTHE DEQUEUED ELEMENT IS %d ",queue_arr[front]);
	    front++;
	    }
}

//display operation---
void display()
{
	int i;
	if(front==-1 ||front>rear)
	{
	  printf("\nQUEUE IS EMPTY");
	}else{
	       for(i=front;i<=rear;i++)
		 {
		    printf("\t%d",queue_arr[i]);
		 }
	     }
}


--------------------------------------------------------------------------------------------------------------------









