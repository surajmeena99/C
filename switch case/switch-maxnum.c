#include<stdio.h>

int main(){
    int num1, num2;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    switch (num1 > num2){
        case 0:
        printf("%d is max", num2);
        break;
        case 1:
        printf("%d is max", num1);
        break;
    
    }
    return 0;
}