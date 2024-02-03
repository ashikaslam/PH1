#include<stdio.h>
#include<string.h>//it has string relate things.
int main()
{
    int i,n;
    char name[100];
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        fgets(name,sizeof(name),stdin);
        int l=strlen(name)-1;// we have to decrement 1 every time for new line.
        //printf("%d",l);
        if(l>10)
        {
            printf("%c%d%c",name[0],l-2,name[l-1]);
        }
        else
        {
            puts(name);
        }
    }
    return 0;
}
