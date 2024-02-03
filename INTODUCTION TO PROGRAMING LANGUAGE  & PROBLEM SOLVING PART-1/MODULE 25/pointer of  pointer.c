#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;
    int** q=&p;
    printf("%p %p",p,q);
    return 0;
}
