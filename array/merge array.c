#include<stdio.h>
void main(){
int arr1[10],arr2[10],arr3[10],n,m,i,j=0;
printf("enter number of elements");
scanf("%d",&n);
printf("enter number of elements");
scanf("%d",&m);
for(i=0;i<n;i++)
{
printf("Enter the elements 1st array:");
scanf("%d",&arr1[i]);
}
for(i=0;i<m;i++){
printf("Enter the elements 2nd array:");
scanf("%d",&arr2[i]);
}
for(i=0;i<n;i++){
arr3[j++]=arr1[i];
}

for(i=0;i<m;i++){
arr3[j++]=arr2[i];
}
for(i=0;i<j;i++)
printf("%d ",arr3[i]);
}
