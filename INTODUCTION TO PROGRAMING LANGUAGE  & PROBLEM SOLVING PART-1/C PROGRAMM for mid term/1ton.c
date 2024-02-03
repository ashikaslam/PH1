


#include<stdio.h>
int main()
{

    int n,i;
    printf("enter any num>>");
    scanf("%d",&n);
    i=1;
    if(n<0)
    {
        while(i>n-1)
        {
            printf("  %d  ",i);
            i--;

        }
    }

    else

    {
        while(i<n+1)

        {

            printf("  %d  ",i);
            i++;
        }


    }
    return 0;
}


