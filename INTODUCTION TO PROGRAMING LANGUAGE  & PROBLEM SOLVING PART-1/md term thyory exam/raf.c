#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter ur numbere>>");
    scanf("%d",&n);
    while(n>0){
    sum=sum+n%10;
    n=n/10;
    }
    printf("\nthe sum of digits of the given number is %d\n",sum);
    return 0;
}
