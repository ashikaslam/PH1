#include<stdio.h>
int main()
{
    int n,h,i,x;
    int w=0;
    scanf("%d",&n);
    scanf("%d",&h);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x>h)
        {
            w+=2;
        }
        else
        {
            w++;
        }
    }
    printf("%d\n",w);
    return 0;
}
