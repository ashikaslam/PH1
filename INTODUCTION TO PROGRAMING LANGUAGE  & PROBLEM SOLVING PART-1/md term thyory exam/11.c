#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int sum5=0;
    int sum6=0;
    int sum7=0;
    int sum8=0;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j] ;
            }
            if(i+j==2)//here is the max num of row and colllum cz we start from 0
            {
                sum2=sum2+a[i][j] ;
            }
        }
    }
    if(sum1!=sum2)
    {
        printf("..... SORRY NOT MASIC MATRIX.....");
        return 0;
    }

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(i==0)
            {
                sum3=sum3+a[i][j];
            }
            if(i==1)
            {
                sum4=sum4+a[i][j];
            }
            if(i==2)
            {
                sum5=sum5+a[i][j];
            }
        }
    }
    if(sum3!=sum4&&sum3!=sum5)
    {
        printf("..... SORRY NOT MASIC MATRIX.....");
        return 0;
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(j==0)
            {
                sum6=sum6+a[i][j];
            }
            if(j==1)
            {
                sum7=sum7+a[i][j];
            }
            if(j==2)
            {
                sum8=sum8+a[i][j];
            }
        }
    }
    if(sum6!=sum7&&sum6!=sum8)
    {
        printf("..... SORRY NOT MASIC MATRIX.....");
        return 0;
    }

    if(sum1==sum3&&sum1==sum6)
    {
        printf(".....MASIC MATRIX.....");
    }
    else
    {
        printf("..... SORRY NOT MASIC MATRIX.....");
    }
    return 0;
}
