#include<stdio.h>
void main(){
int arr[10],i,n,maximum,minimum;
printf("Enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements:");
scanf("%d",&arr[i]);
}
maximum=arr[0];
minimum=arr[0];
for(i=1;i<n;i++){
	if(arr[i]>maximum){
		maximum=arr[i];
	}
	else{
		minimum=arr[i];
	}

	
}
	printf("maximum=%d\n",maximum);
	printf("minimum=%d\n",minimum);

}
