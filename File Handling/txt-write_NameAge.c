#include<stdio.h>

int main(){
    int age;
    char name[20];
    FILE* fptr;
    fptr = fopen("nameAge.txt", "w");

    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter your age:");
    scanf("%d", &age);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d", age);
    
    fclose(fptr);
    
    return 0;
}