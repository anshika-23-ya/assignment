//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int n,s=9;
    printf("Enter the number:");
    scanf("%d %d",&n,&s);
    n=n*10+s;
    printf("%d",n);
    return 0;
}