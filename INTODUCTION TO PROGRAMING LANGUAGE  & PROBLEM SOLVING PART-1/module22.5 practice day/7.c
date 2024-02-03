
#include<stdio.h>
int main()
{
    float arr[105];
    int n,i,j,temp;
    printf("how many number u wanna add in your arry>>");
    scanf("%d",&n);
     printf("Now enter arrray element>>");
    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0; i<n ; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float even1= arr[(n/2)-1];
 float even2= arr[(n/2)];
 float even3=(even1+even2)/2;

if(n%2!=0){
printf("\n%.2f",arr[n/2]);
}
 else{
 printf("\n%.2f",even3);
 }

    return 0;
}
