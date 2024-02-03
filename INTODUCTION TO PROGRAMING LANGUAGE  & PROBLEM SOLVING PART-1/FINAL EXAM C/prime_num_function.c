#include"stdio.h"
int prime(int n);
int main()
{
    int num;
    scanf("%d",&num);
    int ans=prime(num);
    printf("ANS = %d",ans);
    return 0;
}
int prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
