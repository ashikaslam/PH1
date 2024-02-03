#include<stdio.h>
int main()
{

    int n,x;
    int i;
    int ara[200001];
    printf("enter the amount of number you wanna add>>");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        scanf("%d",&x);
        ara[x]=1;
    }

    for(i=1; i<=n; i++)
    {
        printf("\n%d",ara[i]);
    }


    return 0;
}
