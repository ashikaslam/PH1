#include<stdio.h>
struct stdu
{
    int roll;
    float weight;

};
int main()
{
    struct stdu s;
    s.roll=12;
    s.weight=45.789;
    struct stdu* sp;
    sp=&s;

    printf("%d >>> %.2f",sp->roll,sp->weight);


    return 0;
}

