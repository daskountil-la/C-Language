#include<stdio.h>
void main()
{
int rem,rev,num,n;
printf("Enter the number");
scanf("%d",&num);
rev=0;
n=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}

if(n==rev){
printf("The number is palindrome");}
else{
		printf("the number is not palinrom");
}

}
