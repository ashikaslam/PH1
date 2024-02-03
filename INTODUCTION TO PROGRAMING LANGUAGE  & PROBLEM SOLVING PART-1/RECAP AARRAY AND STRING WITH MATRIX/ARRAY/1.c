#include<stdio.h>
int main()
{
    int i;
    int arr[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);

    }

    int maxx=arr[0];
    for(i=1; i<10; i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
        }

    }

printf("%d",maxx);




    return 0;
}
