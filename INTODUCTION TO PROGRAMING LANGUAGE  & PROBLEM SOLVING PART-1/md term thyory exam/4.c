
#include<stdio.h>
int main()
{
char a[10];
a[0]=98;
a[1]=97;
a[2]='n';
a[3]='a';
a[4]='n';
a[5]='a';
a[6]='\0';
printf("%c\n",a[1]);/*for this we will get character type data a cz  97 is the ascii value of small a;*/

printf("%c\n",a[0]);/*for this we will get character type data b cz  98 is the ascii value of small b;*/

puts(a);/*this line prints banana cz as a[10] is a character type array it means 98 and 97 wil
convert into integer to character type dara according thier ascii value;*/
    return 0;
}
