#include<stdio.h>
int main()
{
    int ar[10]= {2,5,6,7,8,9,9,4,5,6};
    int* p=&ar;
    for(int i=0; i<10; i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;
}
