#include<stdio.h>
int main(){
char str[100];
int i, vowels=0, consonents=0;
printf("Enter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
vowels++;
else 
consonents++;
}

printf("vowels: %d\n",vowels);
printf("consonents: %d\n",consonents);
return 0;


}
