#include<stdio.h>

int main(){
    int num1, num2;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    // div = num1 / num2;
    int div = num1 / num2;
    // printf("%d / %d =%d",num1,num2, div);
    printf("%d", div);
    return 0;
}