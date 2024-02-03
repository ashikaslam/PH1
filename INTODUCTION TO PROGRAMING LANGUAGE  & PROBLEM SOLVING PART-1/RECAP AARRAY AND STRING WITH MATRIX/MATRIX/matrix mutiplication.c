#include<stdio.h>
int main()
{
    int a1[3][3];
    int a2[3][3];
    int a3[3][3];
    int i,j,k;
    int sum=0;
    printf("enter first matix>>\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
    printf("enter second matix>>\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\n");
    printf("the product matix is >>\n");






    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                sum=sum+a1[i][k]*a2[k][j];

            }
            a3[i][j]=sum;
            sum=0;
        }
    }


    printf("the product matix is >>\n");

    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d ",a3[i][j]);
        }
    }


    return 0;
}
