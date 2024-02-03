#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 is not prime ");
    }
    else if(n==2)
    {
        printf("prime");
    }
    else
    {
        for(i=2; i<n; i++)

        {
            if(n%i==0)
            {
                printf("composite");
                break;
            }
            else
            {
                printf("prime");
                break;
            }
        }
    }



    return 0;
}
