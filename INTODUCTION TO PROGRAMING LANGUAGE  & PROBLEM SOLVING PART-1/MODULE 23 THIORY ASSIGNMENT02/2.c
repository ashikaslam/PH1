/*
int i=0;
while(i<10)
{
	printf(“I am inside the loop”);
}
 The Problem of this code is,the loop will never end .
 To make the loop stope we have to add i++ inside the loop.
*/
// the right code is>>
#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop\n");
        i++;
    }
    return 0;
}



