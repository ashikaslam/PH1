#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+1));
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",*(ptr+1));
    }
    free(ptr);
    return 0;
}
