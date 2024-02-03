#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d %d",&n,&k);
    for(i=0; i<k; i++);
    {
        if(n%10==0)
            n=n/10;
        else
            n=n-1;
    }
    printf("\n%d",n);
    return 0;
}
