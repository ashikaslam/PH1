#include<stdio.h>
int main(){
int n;
n=6;
int* p=&n;
printf("%p\n",p);
printf("%d",*p);
return 0;}
