#include<stdio.h>

int main(){
    int num1, num2, multiplication;

    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    
    multiplication = num1 * num2;
    // int multiplication = num1 * num2;
    // printf("%d * %d =%d",num1,num2, multiplication);
    printf("%d", multiplication);
    return 0;
}