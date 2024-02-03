#include<stdio.h>
void sorting_arry( int array[]);
int main()
{int a[100]={2,4,5,6,7,4,3,};
sorting_arry(a);
for(int i=0;i<7;i++){
printf("%d ",a[i]);}
    return 0;
}
void sorting_arry( int array[])
{
    int array_len=0;
    int l=0;
    while(array[l]!='\0')
    {
        array_len++;
        l++;
    }
    int i,j,temp;
    for(i=0; i<array_len; i++)
    {
        for(j=i+1; j<array_len; j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

}
