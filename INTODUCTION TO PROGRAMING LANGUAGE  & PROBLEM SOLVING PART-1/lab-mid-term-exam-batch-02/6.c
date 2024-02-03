#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int large=1;
    int count=1;
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int l=strlen(s);
    for(int i=0; i<l; i++)
    {
        if(s[i]==s[i+1])
            count++;
        else
            count=1;
        if(large<=count)
        {
            large = count;
        }
    }
    printf("%d",large);
    return 0;
}
