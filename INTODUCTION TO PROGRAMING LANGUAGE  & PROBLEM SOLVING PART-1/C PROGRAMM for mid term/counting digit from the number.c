#include<stdio.h>
int main()
{
    int number,x;
    scanf("%d",&number);
    x=0;
    while(number>0)
    {
        number/=10;

        x+=1;
    }
    printf("%d",x);
    return 0;
}








