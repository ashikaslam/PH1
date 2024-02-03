#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("enter num1>>");
    scanf("%d",&num1);
    printf("enter num2>>");
    scanf("%d",&num2);
    printf("enter num3>>");
    scanf("%d",&num3);
    printf("enter num4>>");
    scanf("%d",&num4);

    if(num1>num2 & num1>num3 &num1>num4)
    {
        printf("Largest = %d\n",num1);
        if(num2<num3 &num2<num4)
        {
            printf("smallest =%d",num2);
        }
        else if(num3<num2 &num3<num4)
        {
            printf("smallest =%d",num3);
        }
        else
        {
            printf("smallest =%d",num4);
        }
    }

    else if(num2>num1 & num2>num3 &num2>num4)
    {
        printf("Largest = %d\n",num2);

        if(num1<num3 &num1<num4)
        {
            printf("smallest =%d",num1);
        }
        else if(num3<num1 &num3<num4)
        {
            printf("smallest =%d",num3);
        }
        else
        {
            printf("smallest =%d",num4);
        }
    }

    else if(num3>num1 & num3>num2 &num3>num4)
    {
        printf("Largest = %d\n",num3);

        if(num1<num2 &num1<num4)
        {
            printf("smallest =%d",num1);
        }
        else if(num2<num1 &num2<num4)
        {
            printf("smallest =%d",num2);
        }
        else
        {
            printf("smallest =%d",num4);
        }

    }

    else
    {
        printf("Largest = %d\n",num4);


        if(num1<num3 &num1<num2)
        {
            printf("smallest =%d",num1);
        }
        else if(num2<num1 &num2<num3)
        {
            printf("smallest =%d",num2);
        }
        else
        {
            printf("smallest =%d",num3);
        }

    }

    return 0;
}
