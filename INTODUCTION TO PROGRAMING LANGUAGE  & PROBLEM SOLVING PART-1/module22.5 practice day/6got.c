
#include<stdio.h>
int fact(int x);
void ratio_fact(int number1,int number2);
int main()
{
    int x,y;
    printf("enter num1>>");
    scanf("%d",&x);
    printf("enter num2>>");
    scanf("%d",&y);
    printf("the ratio is ");
    ratio_fact(x,y);
    return 0;
}
int fact(int x)
{
    int i;
    int sum=1;
    for (i=1; i<=x; i++)
    {
        sum =sum*i;
    }
    return sum;
}
void ratio_fact(int number1,int number2)
{
    int sum1,sum2;
    sum1=fact(number1);
    sum2=fact(number2);
    int a;
    int b;
    int i;
    if(sum1<=sum2)
    {
        a=sum1;
        b=sum2;
    }
    else if(sum1>=sum2)
    {
        b=sum1;
        a=sum2;
    }
    int ratio=b/a;
    printf("%d",ratio);
}
