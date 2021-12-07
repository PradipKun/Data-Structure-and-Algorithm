//circular queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct queue{
	int item[SIZE];
	int front,rear;
}cq;

//enqueue operation
void enqueue(struct queue *cq,int num){
	if(cq->front==(cq->rear+1)%SIZE){
		printf("Queue Overflow!!");
	}
	else{
		cq->rear=(cq->rear+1)%SIZE;
		cq->item[cq->rear]=num;
	}
}

//dequeue operation
void dequeue(struct queue *cq){
	int dt;
	if(cq->front==cq->rear){
		printf("Queue Underflow!!");
	}
	else{
		cq->front=(cq->front+1)%SIZE;
		dt=	cq->item[cq->front];
		printf("Deleted item=%d",dt);
	}
}

//display operation
void display(struct queue *cq){
	int i;
	if(cq->front==cq->rear){
		printf("Circular Queue is empty");
	}
	else{
		for(i=(cq->front+1)%SIZE;i<=cq->rear;i=(i+1)%SIZE)
			printf("%d\t",cq->item[i]);
	}
}

int main(){
	int num,choice;
	cq.front=SIZE-1;
	cq.rear=SIZE-1;
	printf("\n1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Display");
	do{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the number you want to enqueue:");
				scanf("%d",&num);
				enqueue(&cq,num);
				break;
			case 2:
				dequeue(&cq);
				break;
			case 3:
				display(&cq);
				break;
			case 4:
				exit(0);
			}
		}while(choice!=4);
	return 0;
}




