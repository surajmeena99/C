#include<stdio.h>

int main(){
    int a, b, i;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    do{
        printf("Enter 1 for '+' \n");
        printf("Enter 2 for '-' \n");
        printf("Enter 3 for '*' \n");
        printf("Enter 4 for '/' \n");
        printf("Enter 0 for Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &i);

        switch(i){
            case 0: 
            break;

            case 1:
            printf("a+b = %d\n", a+b);
            break;

            case 2:
            printf("a-b = %d\n", a-b);
            break;

            case 3:
            printf("a*b = %d\n", a*b);
            break;

            case 4:
            printf("a/b = %d\n", a/b);
            break;

            default:
            printf("Enter valid option");
        }
    }while(i != 0);  // i.e. loop run again and again  untel the 'i != 0'
    return 0;
}