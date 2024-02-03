#include<stdio.h>
int add_three_nums(int a, int b, int c);
int main(){
int num1,num2,num3=0;
printf("enter number1>>");
scanf("%d",&num1);
printf("enter number2>>");
scanf("%d",&num2);
int x=add_three_nums(num1,num2,num3);
printf("total = %d",x);
return 0;
}
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
