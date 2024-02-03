#include<stdio.h>
int main()
{
    int r=8;
    int c=8;
    int a1[r][c];
    int i,j;


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            a1[i][j]=0;
        }
    }
    int numRook;
    int x,y;
    scanf("%d",&numRook);
    while(numRook--)/////////nice
    {
        scanf("%d",&x);
        scanf("%d",&y);
        a1[x][y]=1;
    }


    for(i=0; i<r; i++)
    {
        printf("\n");
        for(j=0; j<c; j++)
        {
            printf("%d ", a1[i][j]);
        }
    }
    printf("\n");
/// we have kept rook by above code



    for(i=0; i<r; i++)
    {
        int count=0;
        for(j=0; j<c; j++)
        {
            if(a1[i][j]==1)
            {
                count++;
            }
        }













    }

















    return 0;
}
