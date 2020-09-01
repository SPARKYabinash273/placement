#include<stdio.h>
#define max 100

int top=-1,stack[max];

void push(int x){
	if(top==max){
		printf("No data can be inserted, Stack is full");
	}
	else{
		
		stack[++top]=x;
	}
	
}
void pop(){
	if(top==-1){
		printf("NO data can be removed, Stack is empty");
	}
	else{
		printf("%d",stack[top--]);
	}
}
void display(){
	int i;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
	
		for(i=top-1;i>=0;i--){
			printf("The Elements are : %d\n",stack[i]);
		}
	}
}
void search(int z){
	int i;
		if(top==-1){
		printf("Stack is empty\n");
	}
	else{
	
		for(i=top;i<0;i--){
			printf("The Elements are : %d\n",stack[i]);
			if(stack[i]==z){
				printf("true");
			}
			else{
				printf("false");
			}
		}
	}
	
}
void main(){
	int x,y,choice=0;
	while(1){
		printf("\n1.Push\n2.Pop\n3.Search\n4.Display\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the element to pushed\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("Enter the element to Search \n");
				scanf("%d",&y);
				search(y);
				break;
			case 4:
			 	display();
			 	break;
			 	
			default:
				printf("Invalid choice");
				
				
		}
	

}

}
