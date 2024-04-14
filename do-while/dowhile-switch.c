#include<stdio.h>

int main(){
    int n;

    do{
        printf("1. Hello world \n");
        printf("2. Welcome to the world of programming\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        
        int choice = n;
        switch(choice){
            case 1: 
            printf("Hello World \n");
            break;

            case 2: 
            printf("Welcome to the world of programming \n");
            break;

            case 3:
            exit(0);  //exit(0) is a function call in C that is used to terminate a program.
            
            default:
            printf("Please enter the valid number");
            break;
            
        }
    }while(n > 0);
    return 0;
}