#include<stdio.h>
int main()
{
int n,x,i,sum;
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{

scanf("%d",&x);
sum+=x;
}
printf("\n%d",sum);
return 0;
}
