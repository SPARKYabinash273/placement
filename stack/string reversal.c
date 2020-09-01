#include<stdio.h>
#define max 100

int top=-1,stack[max];

void push(char x){
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
		printf("%c",stack[top--]);
	}
}
main(){
	char str[100];
	printf("Enter an String : \n");
	scanf("%s",str);
	int len=strlen(str);
	int i;
	for(i=0;i<len;i++){
		push(str[i]);
	}
	for(i=0;i<len;i++){
		pop();
	}
}
