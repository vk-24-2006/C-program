#include<stdio.h>

int top = -1;

void push(int stack[],int size,int value){
   if(top == size - 1){
	     printf("Stack Overflow");
    }
	else{
	    stack[++top]=value;
     }
}

void pop(int stack[]){
if(top==-1){
	printf("Stack Underflow\n");
}
else{
	printf("%d pop from stack\n",stack[top--]);
}
}

int i;

void display(int stack[]){
if(top==-1){
	printf("Stack is empty");
}
else{
	for(i=0;i<=top;i++){
		printf(" %d ",stack[i]);
	}
}
}


int main()
{
	int size,choice,value;
	printf("The size of stack : ");
	scanf("%d",&size);
	int stack[size];
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("The value to push : ");
			scanf("%d",&value);
			push(stack,size,value);
		}
		else if(choice==2)
		{
			pop(stack);
		}
		else if(choice==3)
		{	
			printf("\n");
			display(stack);
			printf("\n");
		}
		else if(choice==4)
		{
			printf("Exiting...");
			break;
		}
		else
		{
			printf("Invalid Input\n");
		}
	}
	return 0;
}
