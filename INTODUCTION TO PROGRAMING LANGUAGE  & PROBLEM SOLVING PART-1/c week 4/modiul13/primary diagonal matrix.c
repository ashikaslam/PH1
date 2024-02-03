#include<stdio.h>
int main()
{
    int i,j;
    int r,c;
    r=3;
    c=3;
    int a[r][c];
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        int ans=1;

        for(i=0; i<=r-1; i++)
        {
            for(j=0; j<=c-1; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(a[i][j]!=0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {

            printf("yes");
        }
        else
        {
            printf("not");
        }
    }
    else
    {
        printf("not");
    }
    return 0;
}
