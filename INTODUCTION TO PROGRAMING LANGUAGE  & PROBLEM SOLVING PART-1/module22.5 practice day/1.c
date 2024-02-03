#include<stdio.h>
#include<string.h>
int bainary_chack(char s[]);
int main()
{
    int a;
    char s[100];
    scanf("%s",&s);
    a=bainary_chack(s);

    if(a==1)
        printf("\nbainary");
    else
        printf("\nnot bainary");
    return 0;
}
int bainary_chack(char s[])
{
    int a=0;
    int l=strlen(s);
    for(int i=0; i<l; i++)
    {
        if(s[i]=='0')
        {
            a=1;
        }
        else if(s[i]=='1')
        {
            a=1;
        }
        else
        {
            a=0;
            break;
        }
    }


    return a;
}
