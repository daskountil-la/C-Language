#include<stdio.h>
void main(){
int arr[10],arr1[10],arr2[10],n,i,j=0,k=0;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements:");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if (arr[i]%2==0){
	arr1[j++]=arr[i];
}
else {
arr2[k++]=arr[i];

}
}
printf("number of even:");
for(i=0;i<j;i++){
	printf("%d ",arr1[i]);
}
printf("\n number of odds:");
for(i=0;i<k;i++){
	printf("%d ",arr2[i]);
}


}
