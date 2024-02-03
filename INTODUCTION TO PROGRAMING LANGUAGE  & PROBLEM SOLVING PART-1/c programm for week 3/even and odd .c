#include<stdio.h>
int main()
{
    int n;
    int ara[100];
    int i;
    printf("enter the amount of number you wanna add>>");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
     printf("\nenter the value %dth index>>",i);
        scanf("%d",&ara[i]);

    }
    int e,o;
    for(i=0; i<n; i++)
    {
        if(ara[i]%2==0)
            e++;
        else
            o++;


    }
    printf("even %d",e);
    printf("\nodd %d",o);
    return 0;
}











