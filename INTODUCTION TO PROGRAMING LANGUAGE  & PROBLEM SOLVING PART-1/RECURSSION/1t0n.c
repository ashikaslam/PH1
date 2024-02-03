#include<stdio.h>
void pirntnto1(int n);
int main()
{
    int n;
    scanf("%d",&n);
    pirntnto1(n);
    return 0;
}
void pirntnto1(int n)
{
    if(n>0)
    {
        pirntnto1(n-1);
        printf("\n%d ",n);

    }
}
