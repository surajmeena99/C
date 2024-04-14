#include<stdio.h>

int evenOdd(int num){
    if(num % 2 == 0){
        printf("number is even.\n");
    }else{
        printf("number is odd.\n");
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    evenOdd(n);
    return 0;
}