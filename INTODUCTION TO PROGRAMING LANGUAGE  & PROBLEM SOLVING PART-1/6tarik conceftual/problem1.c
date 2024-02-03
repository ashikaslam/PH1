#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000];
    scanf("%s",&s1);
    int n=strlen(s1);
    int i;
    int largest=26;
    int freq[largest+1];
    for(i=0; i<=largest; i++)
    {
        freq[i]=0;
    }
    for(i=0; i<n; i++)
    {
        freq[(s1[i]-'a')+1]++;
    }
    int  total=0;
    for(i=1; i<=26; i++)
    {
        if(freq[i]>=1)
        {
            total++;
        }
    }
    int next=0;
    while(next!=total)
    {
        int max=-1;
        int index=-1;
        char ch;
        for(i=1; i<=26; i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch=i+96;
                index=i;
            }
        }
        for(i=1; i<=max; i++)
        {
            printf("%c",ch);
        }
        freq[index]=0;
        next++;
    }
    return 0;
}
