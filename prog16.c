//Wap to input a three digit number and display the sum of digit
#include<stdio.h>
int main()
{
    int a=123;
    a=a/100%10+a/10%10+a%10;
    printf("%d",a);
    return 0;
}