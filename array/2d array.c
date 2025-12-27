#include<stdio.h>
void main(){
int arr[10][10],m,n,i,j;
printf("Enter number of rows:");
scanf("%d",&n);
printf("Enter number of column:");
scanf("%d",&m);
for(i=0;i<n;i++)
{   
 for (j=0;j<m;j++)
{
	printf("Enter the elemenets: ");
	scanf("%d",&arr[i][j]);
}
}
printf("\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{ 
	   printf("%d",arr[i][j]);
	}
	printf("\n");
}

}
