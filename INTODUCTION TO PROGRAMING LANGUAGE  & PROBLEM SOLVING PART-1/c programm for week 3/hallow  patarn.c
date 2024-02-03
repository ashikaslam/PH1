#include<stdio.h>
int main()
{
    int l,w;
    l=5;

    int i;
    int lg;
    lg=l-2;
    //int sp;
    //sp=lg*2;
    int x;


    for(i=0; i<l; i++)
    {
        printf("*");
    }
    printf("\n");

    //////////

    for(i=0; i<lg; i++)
    {

        printf("*");

        for(x=0;x<lg;x++){
        printf(" ");

        }
        printf("*\n");

    }





    //////////



    for(i=0; i<l; i++)
    {
        printf("*");
    }





    return 0;
}
