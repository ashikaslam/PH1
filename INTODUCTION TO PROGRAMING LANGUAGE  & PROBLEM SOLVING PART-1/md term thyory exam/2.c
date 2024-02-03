/*
char s="america" it a wrong way for taking string.some token are missing here
lile [] and ;
Right way for string
1.char s[]="america";
2.char s[]={'a','m','e','r','i','c','a','\0'};
*/
#include<stdio.h>
int main()
{
    char s1[]="america";
    char s2[]= {'a','m','e','r','i','c','a','\0'};
    puts(s1);
    puts(s2);
    return 0;
}
