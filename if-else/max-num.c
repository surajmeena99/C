#include<stdio.h>

int main(){
    int num1, num2;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("number1 is max");
    }
    else{
        printf("number2 is max");
    }
    return 0;
}