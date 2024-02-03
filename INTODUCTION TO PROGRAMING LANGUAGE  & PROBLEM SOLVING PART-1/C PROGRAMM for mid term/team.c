#include<stdio.h>
int main()
{
    int n,i,sum,f1,f2,f3;
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {

        scanf("%d ",&f1);
        scanf("%d ",&f2);
        scanf("%d",&f3);

        if(f1+f2+f3>1)

        {
        sum+=1;
        }

    }
    printf("\n%d",sum);
    return 0;
}
