#include<stdio.h>
#include<string.h>
int  string_chacher(char string_x[]);
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    if(string_chacher(s)==17)
    {
        printf("YES");
    }
    else
    {
        printf("N0");
    }

    //printf("%d",string_chacher(s));
    return 0;
}
int string_chacher(char string_x[])
{
    int i,l;
    int flag1;
    int flag7;
    int flag9;
    int final_flag;
    l=strlen(string_x)-1;
    for(i=0; i<l; i++)
    {

        if(string_x[i]=='1')
        {
            flag1=1;
        }
        else if(string_x[i]=='7')
        {
            flag7=7;
        }
        else if(string_x[i]=='9')
        {
            flag9=9;
        }
    }
    final_flag=flag1+flag7+flag9;
    return final_flag;
}
