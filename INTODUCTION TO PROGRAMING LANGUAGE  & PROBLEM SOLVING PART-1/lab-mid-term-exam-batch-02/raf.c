#include<stdio.h>
int main()
{ int i;
    int n;
    scanf("%d",&n);
    int ara[100];

    for( i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int sorted_ara[n];
    ////////////////////
    /*
    for(int j=0; j<n; j++)
    {
        int min=ara[0];
        int minindex=0;
        for(int i=0; i<n; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                minindex=i;
            }
        }
        sorted_ara[j]=min;
        ara[minindex]=9999999;
    }*/

    for(i=0; i<n ; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }





   //////////////////////////
    int e1,e2,o1,o2;
    for(i=n-1; i>=0; i--)
    {
        if(sorted_ara[i]%2==0)
        {
            e1=i;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(i!=e1)
        {
            if(sorted_ara[i]%2==0)
            {
                e2=i;
                break;
            }

        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(sorted_ara[i]%2!=0)
        {
            o1=i;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(i!=o1)
        {
            if(sorted_ara[i]%2!=0)
            {
                o2=i;
                break;
            }

        }
    }
    int even=sorted_ara[e1]+sorted_ara[e2];
    int odd=sorted_ara[o1]+sorted_ara[o2];
    if(even>odd)
    {
        printf("%d",even);
    }
    else
    {
        printf("%d",odd);
    }
    return 0;
}
