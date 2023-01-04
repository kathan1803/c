#include <stdio.h>
#include <cs50.h>

int main()

{
    int a,b;

    printf("Enter the value of a = ");
    scanf("%d",&a);

    printf("Enter the value of b = ");
    scanf("%d",&b);

    // Summation of two numbers
    printf("The sum is %d\n",a+b);

    // Substraction of two numbers
    printf("The difference is %d\n",a-b);

    // Multiplication of two numbers
    printf("The product is %d\n",a*b);

    // Division of two numbers
    printf("The divsion is %d\n",a/b);
}