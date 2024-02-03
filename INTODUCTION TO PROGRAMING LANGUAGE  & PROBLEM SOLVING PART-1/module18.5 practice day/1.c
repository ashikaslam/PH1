#include<stdio.h>
int main()
{
    int n;
    int i;
    int l;
    scanf("%d",&n);
    if(n<0)
    {
        l=(0-n);
        i=n;
        while(i<=l)
        {
            printf("%d ",i);
            i++;
        }
    }
    else
    {
        l=(0-n);
        i=n;
        while(i>=l)
        {
            printf("%d ",i);
            i--;
        }
    }
    return 0;
}
