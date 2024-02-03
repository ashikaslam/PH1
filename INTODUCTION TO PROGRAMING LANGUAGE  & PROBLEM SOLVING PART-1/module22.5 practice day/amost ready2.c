#include<stdio.h>
int prime(int n);
void first_N_prime(int n);
int main()
{
    int x;
    printf("enter any number>>");
    scanf("%d",&x);
    first_N_prime(x);
    return 0;
}
void first_N_prime(int n)
{
    int count=0;
    int l=n*(n+1)/2;
    for(int j=2;; j++)
    {
        if(prime(j)==1)
        {
            printf("%d ",j);
            count++;
            for(int k=1; k<=count; k++)
            {
                if(k*(k+1)/2==count)
                {
                    printf("\n");
                }
            }
        }
        if(count==l)
            break;
    }
}
int prime(int n)
{
    int flag=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(n==2)
    {
        flag=1;
    }
    return flag;
}
