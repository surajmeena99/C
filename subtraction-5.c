#include<stdio.h>

int main(){
    int num1, num2,sub;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    sub = num1 - num2;
    // int sub = num1 - num2;
    // printf("%d - %d =%d",num1,num2, sub);
    printf("%d", sub);
    return 0;
}