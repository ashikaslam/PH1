#include<stdio.h>
#include<math.h>
int main(){
int i;
int sum=0;
char xx[]="alab";
i=0;
while(xx[i]!='\0'){
sum=sum+(xx[i]-96);
i++;}
//printf("%d",sum);
int j=1;
while(pow(2,j)<=sum){
if(pow(2,j)==sum){
printf("y");}
i++;
}
return 0;}
