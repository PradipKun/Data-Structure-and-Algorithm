#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack{
	int item[SIZE];
	int top;
}s;

//push operation
void push(struct stack *s,int num){
	if(s->top==SIZE-1){
		printf("Stack Overflow !!!");
	}
	else{
		s->top=s->top+1;
		s->item[s->top]=num;
	}
}

//pop operation
void pop(struct stack *s){
	int dt;
	if(s->top==-1){
		printf("Stack Underflow !!!");
	}
	else{
	dt=s->item[s->top];
	s->top=s->top-1;
	printf("\nPopped Item=%d",dt);	
	}
}

//display operation
void display(struct stack *s){
	int i;
	if(s->top==-1){
		printf("Stack is empty!");
	}
	else{
		for(i=s->top;i>=0;i--)
			printf("%d\n",s->item[i]);
	}
}

//main funtion
int main(){
	s.top=-1;
	int choice,num;
	printf("1.PUSH \n 2.POP \n 3.Display \n 4.Exit\n");
	while(1){
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the number you want to push:");
				scanf("%d",&num);
				push(&s,num);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				display(&s);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}



































