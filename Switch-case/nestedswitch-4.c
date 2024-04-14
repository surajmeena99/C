#include <stdio.h>

int main() {
    int category, subCategory, item;

    printf("Welcome to the Product Categories!\n");
    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Books\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("You have selected Electronics.\n");
            printf("1. Mobile Phones\n");
            printf("2. Laptops\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subCategory);

            switch (subCategory) {
                case 1:
                    printf("You have selected Mobile Phones.\n");
                    printf("1. iPhone\n");
                    printf("2. Samsung\n");
                    printf("Enter your choice (1-2): ");
                    scanf("%d", &item);

                    switch (item) {
                        case 1:
                            printf("You have selected iPhone.\n");
                            // Add your code for handling iPhone here
                            break;
                        case 2:
                            printf("You have selected Samsung.\n");
                            // Add your code for handling Samsung here
                            break;
                        default:
                            printf("Invalid choice for Mobile Phones.\n");
                            break;
                    }
                break;

                case 2:
                    printf("You have selected Laptops.\n");
                    printf("1. Dell\n");
                    printf("2. HP\n");
                    printf("Enter your choice (1-2): ");
                    scanf("%d", &item);

                    switch (item) {
                        case 1:
                            printf("You have selected Dell.\n");
                            // Add your code for handling Dell laptops here
                            break;
                        case 2:
                            printf("You have selected HP.\n");
                            // Add your code for handling HP laptops here
                            break;
                        default:
                            printf("Invalid choice for Laptops.\n");
                            break;
                    }
                break;

                default:
                    printf("Invalid choice for Electronics.\n");
                    break;
            }
        break;

        case 2:
            printf("You have selected Clothing.\n");
            printf("1. Men's Clothing\n");
            printf("2. Women's Clothing\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subCategory);

            switch (subCategory) {
                case 1:
                    printf("You have selected Men's Clothing.\n");
                    // Add your code for handling Men's Clothing here
                    break;
                case 2:
                    printf("You have selected Women's Clothing.\n");
                    // Add your code for handling Women's Clothing here
                    break;
                default:
                    printf("Invalid choice for Clothing.\n");
                    break;
            }
        break;

        case 3:
            printf("You have selected Books.\n");
            // Add your code for handling Books here
            break;

        default:
            printf("Invalid category.\n");
            break;
    }

    return 0;
}