
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <math.h>
int findsum()
{
    int z,n,i,a[1111],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   int first=a[i];
        while (first>=10)
        {
            first/=10;
        }
        int last= a[i]%10;
        sum+=  last+first;

    }
    return sum;
}
int main()
{

    int a;

    a=findsum();
    printf("%d ",a);
}

