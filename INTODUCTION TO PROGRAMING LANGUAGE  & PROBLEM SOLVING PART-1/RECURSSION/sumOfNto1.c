#include<stdio.h>
int sum_n(int x);
int main()
{
    int n=5;
    int s=sum_n(n);
    printf("%d",s);
    return 0;
}
int sum_n(int x)
{
    if(x>0)
    {
        return sum_n(x-1)+x;
    }
    return 0;
}


