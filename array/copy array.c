#include<stdio.h>
void main(){
int arr1[10],arr2[10],n,i;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements");
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++){
	arr2[i]=arr1[i];
}
for(i=0;i<n;i++){
	printf("%d",arr2[i]);
}



}
