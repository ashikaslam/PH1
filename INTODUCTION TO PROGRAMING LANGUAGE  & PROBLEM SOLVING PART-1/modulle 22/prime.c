#include<stdio.h>
void prime(int n);
int main(){
int x;
printf("enter any num>>");
scanf("%d",&x);
prime(x);
return 0;
}








void prime(int n)
{
    int flag=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {

        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
