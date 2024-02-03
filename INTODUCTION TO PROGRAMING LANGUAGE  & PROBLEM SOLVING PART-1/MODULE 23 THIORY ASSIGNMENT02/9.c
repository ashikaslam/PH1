
#include<stdio.h>
int main()
{
    int a1[3][3];
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







    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            a3[j][i]=a1[i][j];
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
