#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct queue{
	int item[SIZE];
	int rear,front;
}q;

//Enqueue Operation
void enqueue(struct queue *q,int num){
	if(q->rear==SIZE-1){
		printf("Queue Overflow !!");
	}
	else{
		q->rear++;
		q->item[q->rear]=num;	
	}
}

//Dequeue Operation
void dequeue(struct queue *q){
	int dt;
	if(q->front > q->rear){
		printf("Queue Underflow !!");
	}
	else{
		dt=q->item[q->front];
		printf("Deleted Item=%d",dt);
		q->front++;
	}
}

//display operation
void display(struct queue *q){
	int i;
	if(q->front > q->rear){
		printf("Queue is empty !!");
	}
	else{
		for(i=q->front;i<=q->rear;i++){
			printf("%d\t",q->item[i]);
		}
	}
}

int main(){
	q.front=0;
	q.rear=-1;
	int choice,num;
	printf("1.Enqueue \n 2.Dequeue \n 3.Display \n4.Exit");
	while(1){
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the number you want to enqueue:");
				scanf("%d",&num);
				enqueue(&q,num);
				break;
			case 2:
				dequeue(&q);
				break;
			case 3:
				display(&q);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}































