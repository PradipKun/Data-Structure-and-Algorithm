//factorial
#include<stdio.h>

long int fact(int N){
	if(N==0)
		return 1;
	else
		return (N*fact(N-1));
}

int main(){
	int N;
	long  f;
	printf("Enter value of N:");
	scanf("%d",&N);
	f=fact(N);
	printf("Factorial of %d is %ld",N,f);
	return 0;
}
