#include<stdio.h>
struct stdu
{
    int roll;
    float weight;

};
int main()
{
    struct stdu s[10];
    for(int i=0; i<2; i++)
    {
        printf("enter roll of %dth student>>",i+1);
        scanf("%d",&s[i].roll);
        printf("enter weight of %dth student>>",i+1);
        scanf("%f",&s[i].weight);
    }
    printf("\n");
    for(int i=0; i<2; i++)
    {
        printf("ROLL %d >> %.2f KG\n",s[i].roll,s[i].weight);

    }
    return 0;
}
