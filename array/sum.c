#include<stdio.h>
void main(){
	int arr[10],i,n,sum;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the elements:");
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];

	}
	printf("%d",sum);
	

	
}
