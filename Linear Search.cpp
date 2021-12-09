//linear search
#include<stdio.h>

int main(){
	int a[30],i,key,n;
	printf("How many elements do you want in array?\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d \t ",a[i]);
	}
	printf("\nEnter the search key:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key)
			break;
	}
	if(i==n){
		printf("\nSearch failure !!!");
	}
	else{
		printf("\nSearch successful and key %d is found at %d index.",key,i+1);
	}
	
	return 0;
}
