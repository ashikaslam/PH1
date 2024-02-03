#include<stdio.h>
int main()
{

int num1,num2,x,y,r,gcd;
scanf("%d",&num1);
scanf("%d",&num2);
x=num1;
y=num2;
while(y>0)
{
r=x%y;
x=y;
y=r;

}
gcd=x;
printf("the GCD OF %d and %d is %d",num1,num2,gcd);

return 0;
}
