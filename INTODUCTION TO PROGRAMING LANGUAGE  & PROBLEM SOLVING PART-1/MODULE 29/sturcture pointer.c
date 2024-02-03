#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float w;
};
int main()
{
struct student s={.w=45.,.roll=12};
struct student* sp;
sp=&s;
printf("%d",*sp);
    return 0;
}

