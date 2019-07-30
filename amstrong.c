#include<stdio.h>
int main()
{
int num,cnum,rem,sum=0;
printf("enter a number:");
scanf("%d",num);
cnum=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(cnum==sum)
printf(" yes",cnum);
else
printf("no",cnum);
return(0);
}
