#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
int main()
{
    struct point p1;
    struct point p2;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);
    printf("THE DISTANCE BETWEEN THEM IS %d",distance(p1,p2));
    return 0;
}
double distance(struct point p,struct point q){
return sqrt(pow(p.x-q.x,2)+p.y-q.y,2));


}
