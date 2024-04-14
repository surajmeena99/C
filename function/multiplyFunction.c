#include<stdio.h>
void multiply()
{
    int a,b;
    printf("\nEnter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf("\nThe multiplication of a and b is : %d", a*b);
}
main()
{
    multiply();
}