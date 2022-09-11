//Wap to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter_the_value_of_a_and_b:");
    scanf("%d %d",&a,&b);
    printf("Before_the_swapping_a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After_the_swapping_a=%d and b=%d",a,b);
    return 0;
}