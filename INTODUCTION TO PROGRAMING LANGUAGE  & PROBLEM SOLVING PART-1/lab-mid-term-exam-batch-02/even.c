#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n-1];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = 0;
    for (int i=0;i<n;i++)
    {
        if ((arr[i]%2==0) &&(arr[i] > even))
        {
            even = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if ((arr[i] + arr[j]) % 2 == 0)
            {
                if ((arr[i] + arr[j] > even))
                {
                    even = (arr[i] + arr[j]);
                }
            }
        }
    }
    printf("%d", even);
    return 0;
}
