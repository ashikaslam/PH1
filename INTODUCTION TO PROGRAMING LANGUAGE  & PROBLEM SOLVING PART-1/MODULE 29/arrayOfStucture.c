#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name;
};
int main()
{
    struct student s1[10];
    s1[0].name="ASHIK ASLAM";
    s1[0].roll=570963;
    printf("%d",s1[0].roll);
 puts(s1[0].name);
    //printf("%s's ROLL IS %d",s1[0].name,s1[0].roll);


    return 0;
}

