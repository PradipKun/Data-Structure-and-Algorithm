#include<stdio.h>

int fibo(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return ( fibo(n-1) + fibo(n-2) );
	}
}

int main(){
	int x,pos;
	printf("Enter the position of the nth fibonacci series:");
	scanf("%d",&pos);
	x=fibo(pos);
	printf("The %dth fibonacci numbers is %d",pos,x);
	return 0;
}
