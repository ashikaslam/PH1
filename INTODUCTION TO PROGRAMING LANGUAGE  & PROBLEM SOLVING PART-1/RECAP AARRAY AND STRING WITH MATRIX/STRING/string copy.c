
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]= "helloworld";
    char s2[]="ASHIK";
    strcpy(s2,s1);
    strncpy(s2,s1,4);
    puts(s2);
    return 0;
}
