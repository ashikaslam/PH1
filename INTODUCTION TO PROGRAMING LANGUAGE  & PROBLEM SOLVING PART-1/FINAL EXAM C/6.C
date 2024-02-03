#include"stdio.h"
void ola();
int main()
{
    for(int i=1; i<=5; i++)
    {
        ola();
    }
    return 0;
}
void ola()
{
    printf("HELLO\n");
    return 1;
}
