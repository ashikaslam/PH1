
#include<stdio.h>
void fun_sum(int* a,int* b,int* c);
int main()
{
    int a=10,b=20;
    int c=0;
    fun_sum(&a,&b,&c);
    printf("%d",c);
    return 0;
}
void fun_sum(int* a,int*  b,int*  c)
{
    *c= *a + *b;
}
