#include<stdio.h>
int prime(int n);
int main()
{
    int x=20;
    for(int i=2; i<=x; i++)
    {
        if(prime(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
int prime(int n)
{
    int flag=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(n==2)
    {
        flag=1;
    }
    return flag;
}
