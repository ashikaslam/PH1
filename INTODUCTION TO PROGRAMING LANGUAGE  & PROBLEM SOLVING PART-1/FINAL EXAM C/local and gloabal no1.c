#include"stdio.h"
int x=10;
void fun_local()
{
    int i=20;
    printf("%d",i); // i is a local variable
}
int main()
{
    printf("%d ",x); // x is a global variable
    return 0;
}
