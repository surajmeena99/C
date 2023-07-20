#include<stdio.h>

int main(){
    int num1, num2, modulo;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    modulo = num1 % num2;
    // int modulo = num1 % num2;
    // printf("%d % %d =%d",num1,num2, modulo);
    printf("%d", modulo);
    return 0;
}