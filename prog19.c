//Write a program to check whether the given number is even or odd using a bitwise
//operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter_the_number");
    scanf("%d",&num);
    if(num&1)
    {
        printf("%d is a odd number");
    }
    else{
        printf("%d is  even number");
    }
    return 0;
}