#include<stdio.h>

//with parameter & without return value
void add(n1, n2)
{
    int ans;
    ans = n1 + n2;
    printf("Sum of n1 and n2 is = %d",ans);
}

main()
{
    int num1, num2;
    printf("Enter two  numbers:");
    scanf("%d%d", &num1, &num2);
    add(num1, num2);
}