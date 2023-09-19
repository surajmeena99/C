#include<stdio.h>
void add()
{
    int a,b;
    printf("\nEnter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf("\nThe addition of a and b is %d", a+b);
}
main()
{
    add();
}