#include<stdio.h>

int main(){
    int age;
    char name[20];
    FILE* fptr;

    fptr = fopen("nameAge.txt", "r");

    fscanf(fptr, "%s", &name);
    fscanf(fptr, "%d", &age);

    printf("Name= %s\n",name);
    printf("Age= %d",age);
    
    fclose(fptr);

    return 0;
}