#include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter 2nd Number:");
    scanf("%d", &num2);
    printf("Enter 3rd Number:");
    scanf("%d", &num3);
   
    if(num1 > num2){
        if (num1 > num3){
            printf("num1 is max.");
        }
        else{
            printf("num3 is max.");
        }   
    }
    else{
        if(num2 > num3){
            printf("num2 is max.");
        }
        else{
            printf("num3 is max.");
        }
    }
    return 0;
}