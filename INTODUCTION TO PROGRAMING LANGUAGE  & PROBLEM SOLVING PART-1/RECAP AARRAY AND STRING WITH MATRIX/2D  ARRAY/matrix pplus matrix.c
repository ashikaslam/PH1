#include<stdio.h>
int main()
{
    int a1[3][3];
    int a2[3][3];
    int i,j;

    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
printf("\n");

for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d ",a1[i][j]+a2[i][j]);
        }
    }
    return 0;
}










