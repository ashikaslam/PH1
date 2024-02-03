#include<stdio.h>
int is_prime(int x);
int sod(int x);
int main()
{
    int n=16;
    if(is_prime(sod(n))==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
int sod(x)
{
    int sum=0;
    while(x>0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}
int is_prime(int x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
