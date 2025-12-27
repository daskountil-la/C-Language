#include<stdio.h>
void main(){
int arr[10],n,m,i,pos=0;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the elements");
scanf("%d",&arr[i]);
}
printf("Enter the searched element");
scanf("%d",&m);
for(i=0;i<n;i++){
if(m==arr[i]){
printf("%d",i+1);
break;
}
}
if(m!=arr[i])
printf("Element not found");



}
