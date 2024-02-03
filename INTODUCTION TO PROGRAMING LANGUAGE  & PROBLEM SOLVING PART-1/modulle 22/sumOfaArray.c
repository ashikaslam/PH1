#include<stdio.h>
int sumOfaArray(int arr[]);
int main()
{
    int a[]= {1,2,3,4,5};
    printf("%d",sumOfaArray(a));
    return 0;
}
int sumOfaArray(int arr[])
{
    int sum=0;
    int count =0;
    int i=0;
    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
    for(int i=0; i<count; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
