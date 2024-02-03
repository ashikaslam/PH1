#include<stdio.h>
int main()
{


    int n=5;
    int ara[100];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    printf("now  add extra \n");
    int x=ara[0];
    int  m=ara[0];

    for(i=1; i<n; i++)
    {


    } for (i=0; i<n; i++)
    {
        if(ara[i]==m)
        {
            m=ara[i];

            if(ara[i]==x&&x==m)
            {
                printf("y");
            }
            else{

            printf("n");
            }

        }
    }








    return 0;
}
