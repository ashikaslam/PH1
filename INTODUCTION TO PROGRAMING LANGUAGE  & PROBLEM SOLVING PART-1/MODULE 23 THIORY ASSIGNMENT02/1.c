#include<stdio.h>
#include<string.h>
char string_swap(char string_x[]);
int main()
{
    char s[100];
    int i,l;
    fgets(s,sizeof(s),stdin);
    l=strlen(s)-1;
    string_swap(s);
    puts(s);
    return 0;
}
char string_swap(char string_x[])
{
    int i,l;
    l=strlen(string_x)-1;
    for(i=0; i<l; i++)
    {

        if(string_x[i]<='Z'&& string_x[i]>='A')
        {
            string_x[i]=string_x[i]+32;
        }
        else
        {
            string_x [i]=string_x[i]-32;
        }

    }
    return string_x;
}
