#include<stdio.h>
#include<string.h>
void sort(char a[],int l);
int main()
{
    char  arr[100];
    scanf("%s",arr);
    int len=strlen(arr);
    sort(arr,len);
    return 0;
}
void sort(char a[],int l)
{
    int frequen[26];
    int i;
    for(i=0; i<=25; i++)
    {
        frequen[i]=0;
    }
    for(i=0; i<=8; i++)
    {
        frequen[a[i]-97]++;
    }
    for(i=0; i<=25; i++)
    {
        if( frequen[i]>0)
        {
            for(int j=0; j<frequen[i]; j++)
            {
                printf("%c",i+97);
            }
        }
    }

}
