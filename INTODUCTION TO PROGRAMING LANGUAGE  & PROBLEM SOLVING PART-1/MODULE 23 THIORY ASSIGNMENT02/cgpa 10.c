#include<stdio.h>
char cgpa(int mark);
int main()
{
    int num;
    printf("enter ur mark>>");
    scanf("%d",&num);
    if(cgpa(num)=='x')
    {
        printf("PLEASE ENTR A VALIED MARK");
    }
    else
    {
        printf("your greade is %c",cgpa(num));
    }
    return 0;
}
char cgpa(int mark)
{
    if(mark>=80&&mark<=100)
    {
        return 'A';
    }
    else if(mark>=60&&mark<=79)
    {
        return 'B';
    }
    else if(mark>=40&&mark<=59)
    {
        return 'C';
    }
    else if(mark>=0&&mark<=39)
    {
        return 'F';
    }
    else
    {
        return 'x';
    }
}
