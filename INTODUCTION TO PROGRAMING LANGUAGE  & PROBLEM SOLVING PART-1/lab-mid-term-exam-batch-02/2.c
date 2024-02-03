#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int n;
    int m;
    int sum=0;
    fgets(s,sizeof(s),stdin);
    int l=strlen(s)-1;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0; i<l; i++)
    {
        if(s[i]=='+')
            sum=sum+(n+m);
        else if(s[i]=='*')
            sum=sum+(n*m);
    }
    printf("%d",sum);
    return 0;
}
