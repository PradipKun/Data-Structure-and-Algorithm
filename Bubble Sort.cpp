//bubble sort 
#include<stdio.h>

int main(){
	int a[30],n,i,j,temp;
	printf("How many elements do you want to sort?\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Array before sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
	//bubble sort
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\n Array after sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
