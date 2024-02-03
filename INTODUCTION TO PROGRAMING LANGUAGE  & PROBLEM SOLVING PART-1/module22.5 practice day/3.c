#include<stdio.h>
#include<string.h>
int main()
{

    int n=5;
    int i;
    char s[100];
    char arr[10000];
    for( i=1; i<=n; i++)
    {
        scanf("%s",&s);
    }
    for( i=1; i<=n; i++)
    {
        arr=s+arr;
    }
    return 0;
}
