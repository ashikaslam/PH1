#include<stdio.h>L
int main()
{
    int n;
    int arr[n+1];
    int i;
    int sum=0;
    scanf("%d",&n);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]%10;
    }
    printf("%d",sum);
    return 0;
}
