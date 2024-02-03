#include<stdio.h>
int main()
{
    int i,n,count,j;
    int  arry[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arry[i]);
    }
    for(i=0; i<n; i++)
    {
        count=0;
        if(arry[i]==1 || arry[i]==0)
        {
            count++;
        }
        for(int j=2; j<arry[i]-1; j++)
        {
            if(arry[i]%j==0)
            {
                count++;
            }

        }
        if(count==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}

