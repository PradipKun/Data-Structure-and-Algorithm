//binary search
#include<stdio.h>

int binarysearch( int a[],int l,int h,int key){
	if(l>h){
		return -1;
	}
	else{
		int mid=(l+h)/2;
		
		if(a[mid]==key){
			return mid;
		}
		
		if(a[mid]>key){
			return binarysearch(a,l,mid-1,key);
		}
		
		if(a[mid]<key){
			return binarysearch(a,mid+1,h,key);
		}
}
}
int main(){
	int a[30],m,l,h,n,i,key,result;
	printf("How many elements do you want in array?\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nEnter the search key:");
	scanf("%d",&key);
	l=0;h=n-1;
	result= binarysearch(a,l,h,key);
	(result==-1)
	? printf("Search Failure !!!")
	: printf("Search Successful and key %d is present at %d index",key,result+1);
		
	return 0;
}









