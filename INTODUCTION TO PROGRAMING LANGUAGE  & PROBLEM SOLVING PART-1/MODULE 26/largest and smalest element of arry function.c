#include<stdio.h>
void maxx_minn_fun(int n,int array[],int*p,int*q);
int main()
{
    int arr[]= {3,4,5,6,7,3,1};
    int len =sizeof(arr)/sizeof(int);
    int maxx,minn;
    maxx_minn_fun(len,arr,&maxx,&minn);
    printf("%d\n",maxx);
    printf("%d",minn);
    return 0;
}
void maxx_minn_fun(int n,int array[],int* p,int* q)
{

    *p=array[0];
    *q=array[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(array[i]>*p)
        {
            *p=array[i];
        }
        if(array[i]<*q)
        {
            *q=array[i];
        }
    }

}
