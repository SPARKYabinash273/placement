#include<stdio.h>
#define max 10

int rear=-1;
int front=0;
int queue[max];
int item=0;

int peek(){
	return queue[front];
}

int isfull(){
	return item=max;
}

int isempty(){
	return item==0;
}

int size(){
	return item;
}

void enqueue(int n){
	if(!isfull()){
		if(rear==max-1){
			rear=-1;
		}
		queue[++rear]=n;
		item++;
	}
}
int dequeue(){
	int n=queue[front];
	if(front==max){
		front=0;
	}
	item--;
	return n;
}

int main(){

	enqueue(13);
	enqueue(17);
	if(isfull()){
		printf("Queue is full");
		
	}
	int num=dequeue();
	printf("Element Removed :%d\n",num);
	enqueue(45);
	enqueue(648);
	enqueue(87);
	enqueue(25);
	printf("Element at front: %d\n",peek());
	
	while(!isempty()){
		int n=dequeue();
		printf("%d\n",n);
	}
}
