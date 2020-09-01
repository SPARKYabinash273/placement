#include<stdio.h>
#define MAX 8

int top=-1;
int stack[MAX];

int isfull(){
	if(top==MAX){
	
	return 1;}
	else{
	
	return 0;}
}
int isempty(){
	if(top==-1){
	
	return 1;}
	else{
	
	return 0;}
}
int peek(){
	return stack[top];
}
int push(int data){
	if(!isfull()){
	
	top=top+1;
	stack[top]=data;
	}else{
	
	printf("Stack is full, No data can be inserted into the stack");}	
}
int pop(){
	int data;
	if(!isempty()){
	
	data=stack[top];
	top=top-1;
	return data;}
	else{
	
	printf("Stack is empty, No data can be removed from the stack");
	}
}
int main(){
	push(76);
	push(32);
	push(23);
	push(23);
	push(64);
	printf("Element at the top of the stack: %d\n",peek());
	printf("Elements: \n");
	while(!isempty()){
		int data=pop();
		printf("%d\n",data);
	}
	printf("stack full: %s\n",isfull()?"true":"false");
	printf("stack empty:%s\n",isempty()?"true":"false");
	
	return 0;
	
}

