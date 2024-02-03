
#include<stdio.h>
int divi(int x){

for(int i=1;i<=x;i++){
if(x%i==0){
printf("%d ",i);}
}
return 0;}
int main(){
divi(17);
return 0;
}
