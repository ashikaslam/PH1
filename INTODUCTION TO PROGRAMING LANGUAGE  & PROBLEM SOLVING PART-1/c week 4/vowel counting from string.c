
#include<stdio.h>
int main()
{
    char name[1000];
    int i=0,counter=0;
    fgets(name,sizeof(name),stdin);
    while(name[i]!='\0')
    {
        if(name[i]=='a')
        {
            counter++;
        }
        if(name[i]=='e')
        {
            counter++;
        }
        if(name[i]=='i')
        {
            counter++;
        }
        if(name[i]=='o')
        {
            counter++;
        }

        if(name[i]=='u')
        {
            counter++;
        }
        i++;
    }

    printf("%d",counter);
    return 0;
}
