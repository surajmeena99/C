#include<stdio.h>

int main(){
    int num=10;  //variable declaration
    int* ptr = &num;  //pointer declaration (pointer datatype created with * operator)

    printf("The value of num: %d\n", num);
    printf("To get the value of num by using pointer: %d\n", *ptr);  // * operator(dereference operator)

    printf("The memory address of num: %p\n", &num);  // & operator(reference operator)
    printf("To get the memory address of num by using pointer: %p\n", ptr);  

    return 0;
}

//num is a integer variable that stores a value.

//&num is the memory address where the value of num is stored.

//ptr is a pointer variable that stores the memory address(memory location) of another variable as its value.

/* Just like a GPS helps you find a location, a pointer helps your program find a piece of data
 in your computer's memory. */