#include<stdio.h>
void evenodd(int x);
int main()
{
int n;
printf("enter any number>>");
scanf("%d",&n);
evenodd(n);
    return 0;
}
void evenodd(int x)
{
    if(x%2==0)
    {
        printf("itz even ");
    }
    else
    {
        printf("itz  odd ");

    }
}
