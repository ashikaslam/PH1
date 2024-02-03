#include<stdio.h>
int main()
{
    int n,i,j;
    n=10;
    int l;
    for(i=n; i>=1; i--)
    {
        l=n-i;

        for(int k=0; k<=l; k++)
        {
            printf(" ");
        }
        for(j=i*2-1; j>=1; j--)
        {
            printf("*");
        }
        for(int k=0; k<=l; k++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
