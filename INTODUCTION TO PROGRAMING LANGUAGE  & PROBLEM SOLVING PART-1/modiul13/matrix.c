#include<stdio.h>
int main()
{

    int i,j;
    int r=4,c=3;
    int a[r][c];
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<=r-1; i++)
    {
        for(j=0; j<=c-1; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
