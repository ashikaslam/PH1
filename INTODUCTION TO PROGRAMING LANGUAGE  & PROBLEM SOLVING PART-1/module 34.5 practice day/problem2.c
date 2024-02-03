#include<stdio.h>
#include<stdbool.h>
int main()
{
    FILE* inputfile;
    FILE* out;
    inputfile=fopen("in.txt","r");
    out =fopen("out.txt","w");
    int ch;
    fscanf(inputfile,"%d",&ch);
    for(int  i=1; i<=ch; i++)
    {
        fprintf(out,"%d ",i);
    }

    return 0;
}
