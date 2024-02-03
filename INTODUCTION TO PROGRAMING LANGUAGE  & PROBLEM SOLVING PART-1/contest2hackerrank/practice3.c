#include <stdio.h>
int main()
{
    int i,n,j,x;
    scanf("%d",&n);
    int ara[n+1];
    for( i=1 ; i<=n ; i++)
    {
        ara[i]=n-i+1;
    }
    for(int i=1; i<=n ; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d",ara[n-j+1]);
        }
        printf("\n");
    }
    return 0;
}
