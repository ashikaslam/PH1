#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("enter first word>>");
    fgets(s1,sizeof(s1),stdin);
    printf("enter first word>>");
    fgets(s2,sizeof(s2),stdin);
    printf("\n");
    printf("\n");
    int i,ans,len1,len2;
    ans=1;
    len1=strlen(s1)-1;
    len2=strlen(s2)-1;
    if(len1!=len2)
    {
        printf(".........ERROR..........");
        printf("\nSRING SIZE MUST BE SAME");
        return 0;
    }
    for(i=0; i<=len1-1; i++)
    {
        if(s1[i]>='A'&&  s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
        if(s2[i]>='A'&&s2[i]<='Z')
        {
            s2[i]=s2[i]+32;
        }
    }
    for(i=0; i<=len1-1; i++)
    {
        if(s1[i]>s2[i])
        {
            puts(s2);
            printf("come first ");
            return 0;
        }
        if(s2[i]>s1[i])
        {
            puts(s2);
            printf("come first ");
            return 0;
        }
    }
    printf("both are same");
    return 0;
}
