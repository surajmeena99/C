#include<stdio.h>

void area()
{
    double radius, area;
    printf("\nEnter the radius of circle:");
    scanf("%lf", &radius);
    
    area= 3.14*radius*radius;
    printf("area of circle: %lf", area);
}
main()
{
    area();
}