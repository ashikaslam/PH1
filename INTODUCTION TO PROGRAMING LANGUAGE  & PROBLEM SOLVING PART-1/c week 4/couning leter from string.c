#include<stdio.h>
#include<string.h>//it has string relate things.
int main()
{
    int i;
    char name[100];
    fgets(name,sizeof(name),stdin);
    int l=strlen(name)-1;// we have to decrement 1 every time for new line.
    //printf("%d",l);
    if(l>10){

    printf("%c%d%c",name[0],l-2,name[l-1]);
    }
    return 0;
}
