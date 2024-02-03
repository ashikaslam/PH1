#include<stdio.h>
int sumOfn(int n);
int main()
{
    int n=5;
    int sum=sumOfn(n);
    printf("%d",sum);
    return 0;
}
int sumOfn(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return  sumOfn(n-1)+n;
    }
}
