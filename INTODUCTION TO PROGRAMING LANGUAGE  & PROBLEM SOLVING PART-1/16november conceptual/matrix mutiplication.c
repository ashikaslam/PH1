#include<stdio.h>
int main()
{
    int r1,c1;
    int r2,c2;
    printf("\nenter row of first matix>>");
    scanf("%d",&r1);
    printf("\nenter collum of first matix>>");
    scanf("%d",&c1);
    printf("\nenter row of second matix>>");
    scanf("%d",&r2);
    printf("\nenter collum of second matix>>");
    scanf("%d",&c2);
    if(c1!=r1)
    {
        printf(".........ERROR........");
        printf("\nTHE NUMBER OF FIRST MATRIX COLLUM ELEMENT\nAND THE NUMBER OF SECOND MATRIX ROW ELWMENT MUST BE SAME\n");
        return 0;
    }
    int a1[r1][c1];
    int a2[r2][c2];
    int a3[r1][c2];
    int i,j,k;
    int sum=0;
    printf("enter first matix>>\n");
    for(i=0; i<r1; i++)
    {
        printf("\n");
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
    printf("enter second matix>>\n");
    for(i=0; i<r2; i++)
    {
        printf("\n");
        for(j=0; j<c2; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\n");
    printf("the product matix is >>\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+a1[i][k]*a2[k][j];

            }
            a3[i][j]=sum;
            sum=0;
        }
    }
    printf("the product matix is >>\n");
    for(i=0; i<r1; i++)
    {
        printf("\n");
        for(j=0; j<c2; j++)
        {
            printf("%d ",a3[i][j]);
        }
    }
    return 0;
}
