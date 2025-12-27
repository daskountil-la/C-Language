#include<stdio.h>
void main()
{
int rem,rev,num;
printf("Enter the number");
scanf("%d",&num);
rev=0;
while (num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("%d",rev);
}
