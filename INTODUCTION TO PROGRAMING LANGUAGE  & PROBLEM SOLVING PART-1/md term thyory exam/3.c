#include<stdio.h>
int main()
{
int s1[20];
int i;
s1[1]=1;
for(i=2;i<=15;i++){
s1[i]=s1[i-1]*2;
}
for(i=1;i<=15;i++){

printf("%d ",s1[i]);
}
    return 0;
}
