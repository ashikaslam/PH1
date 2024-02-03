#include<stdio.h>L
int main()
{
    int i;
    char s1[]="dddaaabccdffgzzza";
    i=0;
// we make i =1 than u have to print s1[0] before while loop.
    while(s1[i]!='\0')
    {
        if(s1[i]!=s1[i-1])
        {
            printf("%c",s1[i]);
        }
        i++;
    }
    return 0;
}
