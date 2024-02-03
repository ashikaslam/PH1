
#include<stdio.h>
int main(){

int n,i,x;
n=5;
int ara[100];
for(i=0;i<n;i++){
scanf("%d",&ara[i]);
}
for(x=1;x<=n;x++){

printf("\n%d",ara[n-x]);


}

return 0;
}
