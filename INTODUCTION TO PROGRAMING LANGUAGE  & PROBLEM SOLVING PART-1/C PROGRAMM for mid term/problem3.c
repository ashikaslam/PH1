#include <stdio.h>;
int main()
{
    int number1;
    int x=0;
    scanf("%d",&number1);

    while(number1>0)
    {

        number1/=10;
        x++;
    }
    printf("%d digits",x);
    return 0;
}
