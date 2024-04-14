#include<stdio.h>

//with parameter & without return value
void positiveNegative(int num){
    if(num > 0){
        printf("number is positive\n");
    }else if(num < 0){
        printf("number is negative\n");
    }else{
        printf("zero\n");
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    positiveNegative(n);
    return 0;
}