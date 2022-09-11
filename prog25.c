//13. Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter_the_three_digit_number:\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    z=100*y+x;
    printf("after rotating one poistion  toward right \n %d",z);
    return 0;
}