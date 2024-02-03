
#include<stdio.h>
int main()
{

int num1,num2,x,y,r,gcd,lcm;
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
lcm=(num1*num2)/gcd;


printf("the LCM OF %d and %d is %d",num1,num2,lcm);

return 0;
}
