#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;
    *p=10;
    int** q=&p;
    **q=13;
    printf("%d",a);
    return 0;
}
