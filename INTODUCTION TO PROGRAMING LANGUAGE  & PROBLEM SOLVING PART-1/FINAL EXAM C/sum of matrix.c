#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a1[n][m];
    int a2[n][m];
    int a3[n][m];
    int i,j,k;
    int sum=0;
    printf("enter first matix>>\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
    printf("enter second matix>>\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }

    printf("the product matix is >>\n");

    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            printf("%d ",a3[i][j]);
        }
    }


    return 0;
}
