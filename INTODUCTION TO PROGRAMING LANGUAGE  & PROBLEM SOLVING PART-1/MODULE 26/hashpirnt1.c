#include<stdio.h>
void hash(int x);
int main()
{
    int n=5;
    for (int i=0; i<n; i++)
    {
        hash(i);
    }
    return 0;
}
void hash(int x)
{
    for(int i=0; i<x; i++)
    {
        printf("#");
    }
    printf("\n");
}
