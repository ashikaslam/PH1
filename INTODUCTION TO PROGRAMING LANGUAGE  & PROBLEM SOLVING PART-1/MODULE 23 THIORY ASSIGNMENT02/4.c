#include <stdio.h>
int main()
{
    int number;
    int position_number;
    int count;
    int pirnt_position;
    int i;
    printf("Enter  the number>>");
    scanf("%d",&number);
    printf("Enter  the POSITION>>");
    scanf("%d",&position_number);
    for(i=1; i<=number; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ",i);
            count++;
            if(count == position_number)
                pirnt_position = i;
        }
    }
    for(i=1; i<=number; i++)
    {
        if(i%2 != 0)
        {
            printf("%d ",i);
            count++;
            if(count == position_number)
                pirnt_position = i;
        }
    }
    printf("\n>>%d",pirnt_position);
    return 0;
}
