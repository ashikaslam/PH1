#include"stdio.h"
int fun(void);
int main(void)
{
    int ans=fun();
    printf("%d",ans);
    return 0;
}
int fun(void)
{
    int a=10;
    return a;
}
