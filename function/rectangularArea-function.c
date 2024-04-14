#include<stdio.h>
void area()
{
    int a,b, area;
    printf("\nEnter the lenegth of rec:");
    scanf("%d", &a);
    printf("\nEnter the width of rec:");
    scanf("%d", &b);
    area= a*b;
    printf("area of rectangular: %d", area);
}
main()
{
    area();
}