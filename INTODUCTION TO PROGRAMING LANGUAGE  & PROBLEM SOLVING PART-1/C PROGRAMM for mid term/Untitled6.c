#include<stdio.h>
int main()
{

    int n,m;
    printf("First number>>");
    scanf("%d",&n);
    printf("Second number>>");
    scanf("%d",&m);


if(n==m)
    {
        printf("Both are equal");
        }
    else if(m%n==0)
    {
        printf("The Second number is divisible by  the First  number");
    }


    else if(n%m==0)
    {
        printf("The First number is divisible by  the Second number");
    }
    else
    {
    printf("None of them are divisible by the other. ");
    }

    return 0;
}
