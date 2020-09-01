#include<stdio.h>
#define MAX 10

int stack[MAX];
int top=-1;
int push();
int pop();
int show();
int push()
{
	int x;

	if(top==MAX){
		printf("No element can be pushed, Stack is full");
	}
	else{
		printf("Enter an element to Push: ");
		scanf("%d",x);
		top=top+1;
		stack[top]=x;
	
	}
}
int pop()
{
	if(top==-1){
		printf("Stack is empty,No element can be popped");
	}
	else{
		top=top-1;
		
	}
}
int show(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
	if(top==-1){
		printf("Stack is empty no data can be shown");
	}
}
int main(){
	int choice=0,n;
	printf("Enter the number of Element in the Stack");
	scanf("%d",&n);
	printf("****STACK OPERATION****");
	printf("\n-------------------\n");
	while(choice!=4){
		printf("Choose from the option below");
		printf("\n1.Push\n2.Pop\n3.Show");
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
					show();
					break;
				}
			case 4:
				{
					printf("Exiting...");
					break;
				}
			default:
				{
					printf("Please enter a valid choice");
				}
		}
	}
}
