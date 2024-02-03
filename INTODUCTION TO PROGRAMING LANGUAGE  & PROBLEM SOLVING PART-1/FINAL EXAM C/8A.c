#include"stdio.h"
struct student
{
    float mark;
    int roll;
    char name[50];
};
int main()
{
    struct student s1;
    struct student* sp;
    sp=&s1;
    printf("enter marks:");
    scanf("%f",&s1.mark);
    printf("marks: %.2f",sp->mark);
    return 0;
}
