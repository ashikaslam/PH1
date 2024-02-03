#include<stdio.h>
int main()
{
    int s1[11]= {12, 7, 9, 1, 3, 73, 11,15, 62, 19, 4};
    int i;
    int n=11;
    int j,temp;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(s1[j]>s1[j+1])
            {
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    for(i=0; i<11; i++)
    {
        printf("%d ",s1[i]);

    }
    return 0;
}
