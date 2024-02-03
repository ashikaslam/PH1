#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int i;
    int a[1000];
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int emaxx1,emaxx2, omaxx1, omaxx2;
    emaxx1=INT_MIN;
    emaxx1=INT_MIN;
    omaxx1=INT_MIN;
    omaxx2=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i]>emaxx1 &&a[i]%2==0)
        {
            emaxx1=a[i];
            a[n-1]=a[i];
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>emaxx2 && a[i]%2==0)
        {
            emaxx2=a[i];

        }
    }
/*
    for(int i=0; i<n; i++)
    {
        if(a[i]>omaxx1 &&a[i]%2!=0)
        {
            omaxx1=a[i];
            a[i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>omaxx2 &&a[i]%2!=0&&a[i]<= omaxx1)
        {
            omaxx2=a[i];

        }
    }
    int even= emaxx2+ emaxx1;
    int odd= omaxx2+ omaxx1;

    if(even>odd)
    {
        printf("%d",even);
    }
    {
        printf("%d",odd);
    }

*/
int even= emaxx2+ emaxx1;

 printf("%d",emaxx2);

    return 0;
}
