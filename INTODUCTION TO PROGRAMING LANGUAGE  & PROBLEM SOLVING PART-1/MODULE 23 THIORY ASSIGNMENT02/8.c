#include<stdio.h>
#include<string.h>
void add_5(char s[]);
int main()
{
    char arr[1000];
    scanf("%s",&arr);
    printf("\n");
    add_5(arr);
    return 0;
}
void add_5(char s[])
{

    int l=strlen(s);
    for(int i=0; i<l; i++)

    {
        if(s[i]=='v')
        {
            s[i]='a';
        }
        else if(s[i]=='w')
        {
            s[i]='b';
        }

        else if(s[i]=='x')
        {
            s[i]='c';
        }

        else if(s[i]=='y')
        {
            s[i]='d';
        }
        else if(s[i]=='x')
        {
            s[i]='e';
        }
        else
        {
            s[i]=s[i]+5;
        }
    }
    puts(s);


}

