#include<stdio.h>
void main(){
int arr[10],n,i,odd=0,even=0;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
	if(arr[i]%2==0){
		even++;
	}
	else{
		odd++;
	}
}
printf("Even: %d",even);
printf("Odd: %d",odd);

}
