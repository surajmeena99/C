#include<stdio.h>

void swap(int *a, int *b){  //swap function that takes two integer pointers as parameters.
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);  //passing the address of num1 and num2 as arguments

    printf("After swapping: num1 = %d, num2 = %d", num1, num2);

    return 0;
}