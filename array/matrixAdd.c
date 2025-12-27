#include<stdio.h>
void main(){
int arr1[10][10],arr2[10][10],arr3[10][10],i,j,m,n;
printf("Enter number of rows:");
scanf("%d",&n);
printf("Enter number of column:");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++){
	printf("Enter the first elements:");
	scanf("%d",&arr1[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++){
printf("Enter the second elements:");
scanf("%d",&arr2[i][j]);
}
}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
    arr3[i][j]=arr1[i][j]+arr2[i][j];
	}
}
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("%d ",arr3[i][j]);
	}
	printf("\n");
	}

}
