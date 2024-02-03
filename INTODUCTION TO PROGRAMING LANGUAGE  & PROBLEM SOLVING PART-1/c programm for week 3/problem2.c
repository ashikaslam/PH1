#include<stdio.h>
int main()
{

    int n,i,x,cn;
    int index,value;
    n=5;


    int ara[100];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("now  add extra \n");
    printf("how maney index  u wanna change?>>");
    scanf("%d",&cn);
    for(i=1;i<=cn;i++){
    scanf("%d",&index);
    scanf("%d",&value);
    ara[index]+=value;
    }





    for(i=0; i<n; i++)
    {
        printf(" %d",ara[i]);
    }
    return 0;
}
