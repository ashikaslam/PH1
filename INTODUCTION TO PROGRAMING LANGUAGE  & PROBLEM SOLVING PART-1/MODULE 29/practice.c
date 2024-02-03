
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    int age;
    float weigth;
    char name[50];
};
int main()
{
    struct student s1={.name="asik aslam",.age=19};
    printf("%s",s1.name);
    printf("%d",s1.age);
    return 0;
}

