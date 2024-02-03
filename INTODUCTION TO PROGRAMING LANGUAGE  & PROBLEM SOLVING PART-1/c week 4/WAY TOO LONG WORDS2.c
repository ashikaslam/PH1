#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[100];
        scanf("%s",s);
        int n = strlen(s);

        if(n>10)
        {
            printf("%c%d%c\n",s[0],n-2,s[n-1]);
        }
        else
            printf("%s\n",s);
    }
    return 0;
}
