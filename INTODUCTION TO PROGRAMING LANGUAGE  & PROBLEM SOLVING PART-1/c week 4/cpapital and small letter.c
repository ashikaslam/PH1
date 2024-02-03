#include<stdio.h>
int main()
{
    int i;
    char name[100];
    fgets(name,sizeof(name),stdin);// this function can take space as input but scanf can't.
    for(i=0; name[i]!='\0'; i++)
    {
        if('a'<=name[i]&&name[i]<='z')
        {
            name[i]-=32;
        }
    }
    puts(name);
    return 0;
}
