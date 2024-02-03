#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l;
    int i;
    int x;
    scanf("%d",&l);
    for(i=1; i<=l; i++)
    {
        printf("%d",i);
    }
    if(l>1){
    printf("\n");
    for(i=2; i<=l-1; i++)
    {
        printf("%d",i);
        for(x=1; x<=l-2; x++)
        {
            printf(" ");
        }
        printf("%d",l);
        printf("\n");
    }
    for(i=1; i<=l; i++)
    {
        printf("%d",l);
    }
    }
    return 0;
}



