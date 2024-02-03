#include<stdio.h>
int main( )
{
    int i,n,x;
    printf("enter the amount of integet u want to put in your array>>");
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        printf("enter value for index %d>",i);
        scanf("%d",&ara[i]);
//printf("%d  ",ara[i]);  if i print it here it will print the last value of i.
    }
//printf("%d  ",ara[i]);   if i print it here it will print a garbage  value of i.
    for(x=1; x<=n; x++)
    {

        printf("\nthe value of %d th i is %d ",x,ara[i]);
    }
    return 0;
}
