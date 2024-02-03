#include<stdio.h>
int main()

{

int num,x,sum;
sum=0;
printf("enter any number >>");
scanf("%d",&num);
while(num>0)
{
x=num%10;
num=num/10;
sum+=x;

}
printf("\nthe sum of the disit is %d",sum);
return 0;
}
