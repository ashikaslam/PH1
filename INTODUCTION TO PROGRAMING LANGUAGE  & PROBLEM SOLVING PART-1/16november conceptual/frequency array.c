#include<stdio.h>
#include<limits.h>
int main()
{
    int a[8]= {5,4,5,7,2,1,4,2};
    int maxx,i;
    maxx=INT_MIN;
//printf("%d",maxx);
    for(i=0; i<8; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }
    // printf("%d",maxx);
    int frequen[maxx+1];
    for(i=0; i<=maxx; i++)
    {
        frequen[i]=0;
    }
    for(i=0; i<=maxx; i++)
    {
        frequen[a[i]]++;
    }
    for(i=0; i<=maxx; i++)
    {
        if( frequen[i]>0)
        {
            for(int j=0; j<frequen[i]; j++)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}
