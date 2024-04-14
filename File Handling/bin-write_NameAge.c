#include<stdio.h>

int main(){
    char name[20];
    int age;
    FILE* fptr;

    fptr = fopen("nameAge.bin", "wb");

    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter your age:");
    scanf("%d", &age);

    fwrite(&name, sizeof(name), 1, fptr);
    fwrite(&age, sizeof(age), 1, fptr);

    fclose(fptr);
    return 0;
}
