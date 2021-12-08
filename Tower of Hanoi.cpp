#include<stdio.h>
#include<conio.h>
int transfer(int n,char source,char target,char aux){
	if(n==1){
		printf("\n Move disk %d from peg %c to peg %c",n,source,target);
	}
	else{
		transfer(n-1,source,aux,target);
		printf("\n Move disk %d from peg %c to peg %c",n,source,target);
		transfer(n-1,aux,target,source);
	}
}

int main(){
	int n;
	printf("\n Enter the no. of disks in the source peg:");
	scanf("%d",&n);
	transfer(n,'s','t','a');
	return 0;
}
