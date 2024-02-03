#include<stdio.h>
int main()
{
    int i,n,m,x;
    n=5;
    int ara[]= {45,67,3,78,56,};
    m=ara[0];
    for (i=0; i<n; i++)
    {
        if(ara[i]>m)
        {
            m=ara[i];
        }
    }
    printf("the maximum value is %d",m);
    return 0;
}
