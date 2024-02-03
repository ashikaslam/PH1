#include<stdio.h>
int main()
{
    int rem;
    int n=1024;
    int ans =1;
    while(n>1)
    {
        rem=n%2;
        n=n/n;
        if(rem!=0)
        {
            ans=0;
        }
    }


    printf("%d",ans);





    return 0;
}
