#include <stdio.h>

int main() {
    int choice, num1, num2, add, sub, multi, div;

    while(1){
        printf("---------MENU---------\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if(choice <= 4){
            printf("You chose Option %d\n",choice);
            printf("Enter first number:");
            scanf("%d", &num1);
            printf("Enter second number:");
            scanf("%d", &num2);
            
            switch(choice){
                case 1:
                    add = num1 + num2;
                    printf("Addition = %d\n", add);
                break;

                case 2:
                    sub = num1 - num2;
                    printf("Substraction = %d\n", sub);
                break;
                case 3:
                    multi = num1 * num2;
                    printf("Multiplication = %d\n", multi);
                break;

                case 4:
                    div = num1 / num2;
                    printf("Division = %d\n", div);
                break;

                default:
                    printf("Invalid choice !!.\n");
                break;
            }
        }else{
            printf("Invalid choice !!!.\n");
        }
    }    
    return 0;
}