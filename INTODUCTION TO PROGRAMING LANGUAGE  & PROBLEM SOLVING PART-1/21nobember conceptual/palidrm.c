#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000005];
    scanf("%s",&str);
    int n=strlen(str);
    int freq[27];
    int i;
    for(i=1; i<=26; i++)
    {
        freq[i]=0;
    }
    for(i=0; i<n; i++)
    {
        freq[str[i]-'A'+1]++;
    }
    for(i=1; i<27; i++)
    {
        printf("%d->> %d\n",i,freq[i]);
    }
    printf("\n\n");
    int flag=1;
    int count=0;
    for(i=1; i<27; i++)
    {
        if(freq[i]%2!=0)
        {
            count++;
        }
        if(count>1)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("yes possible ");
    }
    else
    {
        printf("not possible");
    }
    int kingnum=0;
    char king;
    for(i=1; i<27; i++)
    {
        if(freq[i]%2!=0)
        {
            kingnum=freq[i];
            king=i+64;
        }
    }
    printf("\n\n");
    printf("the numof %c is %d",king,kingnum);
    printf("\n\n");
    ////FIRST
    for(i=1; i<27; i++)
    {
        if(freq[i]%2==0)
        {
            for(int j=1; j<=freq[i]/2; j++)
            {
                printf("%c",i+64);
            }
        }
    }
    ///MIDDLE
    for(i=1; i<27; i++)
    {
        if(freq[i]%2!=0)
        {
            for(int j=1; j<=freq[i]; j++)
            {
                printf("%c",i+64);
            }
        }
    }
///LAST

for(i=26; i>=1; i--)
    {
        if(freq[i]%2==0)
        {
            for(int j=1; j<=freq[i]/2; j++)
            {
                printf("%c",i+64);
            }
        }
    }
    return 0;
}
