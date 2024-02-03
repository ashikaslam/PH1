#include<stdio.h>
int main()
{
    int n=10;
    int x=5;
    int a[]= {12,7,3,71,2,43,38,23,45,22};
    int b[20];
    int i;
    for(i=0; i<=n-1; i++)
    {
        b[i]=a[i]+x;
    }
    for(i=0; i<=n-1; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
