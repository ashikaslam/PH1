#include<stdio.h>
struct person
{
    int age;
    int salary;
};
void display(struct person p,struct person q);
int main(void)
{
    struct person p1;
    struct person p2;
    p1.age=15;
    p1.salary=15000;
    p2.age=50;
    p2.salary=50000;
    display(p1,p2);
    return 0;
}
void display(struct person p,struct person q)
{

    printf("%d >>> %d\n",p.age,p.salary);
    printf("%d >>> %d\n",q.age,q.salary);

}
