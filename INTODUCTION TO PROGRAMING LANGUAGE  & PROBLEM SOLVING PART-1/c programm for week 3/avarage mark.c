#include<stdio.h>
int main()
{
    int av;
    int i,x;
    int mark,sum;

    i=1;

    while(i<4)
    {

        sum=0;
        printf(" student no.%d>>\n",i);

        for(x=1; x<=3; x++)
        {
            scanf("\n%d",&mark);
            sum+=mark;
            av=sum/3;

        }

        printf("\n>>>>>>%d\n",av);
        i++;


    }

    return 0;
}
