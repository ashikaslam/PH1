#include<stdio.h>
int main()
{
    char a[10];/* by this line we  are declaring a character type  array
    array which max number of element will be 10-1 cz null character '\0' will take the last index.
    */


    char ch = 'a';/* in this line we are  declaring a charecter type variale
 name ch and its value is 'a' so when we will convert ch in integer it'll give 97cz a's ascii value is 97.*/


    for( int i = 0; i<8; i++) //* we gonna start a loop now // and it will continue (0 to 7) eiget times.*/
    {
        a[i] = ch+8-i;// itz the most importent line of this code.
    }/*
sept 1:- when i==0 the 0 number index of array a will fill with 'i'.//but why ? as i said the ascii value of is 97 so by this //(ch+8-i) calculation we'll get a
integer vlue ch+8-i
            = a+8-0
            =97+8-0
            =105
and 105 is the ascii value of i.
so after every single step this loop the total valua of (ch+8-i) will  decrease one by one cz i will increment by one and i is negative here
so now the calculation for every step is:-
step 1:a[0]=97+8-0=105 character is 'i'.
step 2:a[1]=97+8-0=104 character is 'h'.
step 3:a[2]=97+8-0=103 character is 'g'.
step 4:a[3]=97+8-0=102 character is 'f'.
step 5:a[4]=97+8-0=101 character is 'e'.
step 6:a[5]=97+8-0=100 character is 'd'.
step 7:a[6]=97+8-0=99 character is 'c'.
step 8:a[7]=97+8-0=98 character is 'b'.
*/

    a[8] = '\0';
    /* and in the end we gotta keep null character '\0' in the last index to make he program work good*/
    puts(a);
    return 0;
}
