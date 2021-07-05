#include<stdio.h>
#include<stdlib.h>  //exit(0);
#define CAPACITY 5
int stack[CAPACITY], top = -1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void travers(void);
void peek(void);

void main(){
	int ch, item;
	
	while(1){
		printf("\n1. push");
		printf("\n2. pop");
		printf("\n3. peek");
		printf("\n4. traverse");
		printf("\n5. quit");
	
		printf("\nEnter your choice :")	;
		scanf("%d",&ch);	
		
		switch(ch)
		{
			case 1:
				printf("Enter element :");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item = pop();
				if(item == 0)
				{
					printf("stack is underflow\n");
					
				}
				else
				{
					printf("poped item : %d\n ",item);
				}
				break;
			case 3:
				peek();
				break;
			case 4:
				travers();
				break;
			case 5:
				exit(0);
			default : 
				printf("invalid input \n\n");
				break;
		}
	}
	//return 0;
	
}

void push(int ele)
{
	if(isFull())
	{
		printf("Stack is overflow\n");
	}
	else
	{
		top ++;
		stack[top]=ele;
		printf("%d is Pushed \n",ele);	
	}
	
}

int isFull()
{
	if(top == CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pop(){
	if(isEmpty())
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
}

int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void peek()
{
	if(isEmpty())
	{
		printf("Stock is Empty \n");
	}
	else
	{
		printf("Peek element : %d\n",stack[top]);
		
	}

}

void travers()
{
	if(isEmpty())
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		printf("Stack element :\n");
		for(i=0; i<=top; i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}
