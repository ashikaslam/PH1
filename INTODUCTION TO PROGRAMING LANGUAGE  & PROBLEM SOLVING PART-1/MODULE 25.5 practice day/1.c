#include<stdio.h>
int  xfn(int a)
{
    int i;
    int arr[100];
    for (i=0; i<=a-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int count=0;
    for (i=0; i<=a-1; i++)
    {
        if(arr[i]!=k)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n%d",xfn(n));
return 0;
}


