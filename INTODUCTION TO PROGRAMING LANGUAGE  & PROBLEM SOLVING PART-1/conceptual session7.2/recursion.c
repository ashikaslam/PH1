#include<stdio.h>
int num=1;





void oneTOn(int n)
{
    if(num>n)
    {
        return;
    }

    printf("%d ",num);
    num++;
    oneTOn(n);
}

int main(void){
int n=10;
oneTOn(n);

return 0;}




