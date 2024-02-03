#include<stdio.h>
int main()
{
    int i;
    int n;
    int e1,e2,o1,o2;
    scanf("%d",&n);
    int arr[n];

    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
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
    for(i=n-1; i>=0; i--)
    {
        if(arr[i]%2==0)
        {
            e1=i;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(i!=e1)
        {
            if(arr[i]%2==0)
            {
                e2=i;
                break;
            }

        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(arr[i]%2!=0)
        {
            o1=i;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(i!=o1)
        {
            if(arr[i]%2!=0)
            {
                o2=i;
                break;
            }

        }
    }
    int even=arr[e1]+arr[e2];
    int odd=arr[o1]+arr[o2];
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
