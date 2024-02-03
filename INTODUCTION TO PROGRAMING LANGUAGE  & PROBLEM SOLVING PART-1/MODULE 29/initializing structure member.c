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
    struct student s1;
    scanf("%d%d%f%s",&s1.roll,&s1.age,&s1.weigth,&s1.name);
    printf("\n");
    printf("%d\n",s1.roll);
    printf("%d\n",s1.age);
    printf("%.2f\n",s1.weigth);
    printf("%s\n",s1.name);
    return 0;
}

