#include<stdio.h>
int  choice,x,i,n,top,stack[100];
void push(void);
void pop(void);
void peek(void);
void display(void);
int main()
{
        top=-1;
	printf("\nEnter the size of the stack: ");
	scanf("%d",&n);
	printf("\nPush operation using array:\n");
        printf("***1.PUSH\t2.POP\t3.DISPLAY\t4.PEEK\t5.EXIT***/n");
	
do{
	printf("\nEnter the choice: " );
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}	
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			peek();
			break;
		}
		case 5:
		{
			printf("\n!!!! EXITPOINT !!!!\n");
			break;
		}
	        default:
		{
			printf("\n#### ENTER A VALID INPUT(1,2,3,4) #####\n");
			break;
		}
	}	
 }
  while(choice!=5);
  return 0;
} 
	void push()
	{
		if(top>=n-1)
		{
			printf("\n````STACK OVERFLOW````\n");
		}
		else
		{
			printf("\nEnter a value to be pushed: ");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
	void pop()
	{
		if(top<=n-1)
		{
			printf("\n````STACK UNDERFLOW````\n");
		}
		else
		{
			printf("\nEnter a value to be popped: ");
			top--;
		}
	}
	void display()
	{
		if(top>=0)
		{
			printf("\nStack Elements are:\n ");
			for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
			printf("\n### PRESS THE NEXT CHOICE ###\n");
		}
		else
		{
		printf("\n!!!! STACK IS EMPTY !!!!\n");
		}
	}
	void peek()
	{
		if(top==-1)
		{
			printf("\n````STACK EMPTY````\n");
		}
		else
		{
			printf("\nPeek Element:%d",stack[top]);
		}
		
	}	
