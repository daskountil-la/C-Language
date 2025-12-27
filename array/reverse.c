#include<stdio.h>
void main(){
	int arr[10],n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the elements:"),
	scanf("%d",&arr[i]);
	}

	for(i=n-1;i>=0;i--)
	{
	printf("%d",arr[i]);
	}

	
}
