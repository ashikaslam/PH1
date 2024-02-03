#include<stdio.h>
#include<string.h>
int main()
{
    char s1[6]= {'A','S','L','A','M','\0'} ;// HAVE TO SAY THE ARRY SIZE
    char s2[]="ASHIK";// DO NOT HAVE TO SAY THE ARRY SIZE
    char s3[]="I LOVE BANGLADESH";
    puts(s1);
    puts(s2);
    puts(s3);
    int len=strlen(s1);
    printf("%d",len);
    printf("\n%d",strnlen(s2,11));// will pint 5 cz five small bitween 11 and 5
    int small2=strnlen(s1,4);
    char  arr[10];
    printf("\n");
    scanf("%s",&arr);
    puts(arr);

    return 0;
}
