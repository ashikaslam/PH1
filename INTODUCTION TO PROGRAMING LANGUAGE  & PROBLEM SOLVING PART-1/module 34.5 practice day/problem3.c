#include"stdio.h"
int main()
{
    int n=-5;
    if(n>0)
    {
        for(int i=n; i>=n*(-1); i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=n; i<=n*(-1); i++)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
