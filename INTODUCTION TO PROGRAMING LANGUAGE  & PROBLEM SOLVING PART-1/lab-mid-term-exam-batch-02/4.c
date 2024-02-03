#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d",&t);

    for (int i=0 ; i<t ; i++)
    {
        int x,count=0;
        scanf("%d",&x);
        char s[x];
        scanf("%s",&s);
        for (int j=0 ; j<strlen(s); j++)
        {
            if (s[j]=='1'&&s[j+1]=='0')
            {
                count++;
            }

            else if (s[j]=='0'&&s[j+1]=='1')
            {
                count++;
            }

        }
        printf("%d\n",count);
    }

    return 0;
}
