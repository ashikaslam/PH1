#include<stdio.h>
int main()
{
    int r=3;
    int c=3;
    int a1[100][100];
    int i,j;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a1[i][j]==i&&a1[i][j]==j)
            {
                a1[i][j]=a1[i][j]+3;
                printf("%d ", a1[i][j]);
            }
            else if(a1[i][j]==i)
            {
                a1[i][j]=a1[i][j]+2;
                printf("%d ", a1[i][j]);
            }
            else if(a1[i][j]==j)
            {
                a1[i][j]=a1[i][j]+1;
                printf("%d ", a1[i][j]);
            }
            else
            {
                printf("%d ", a1[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
