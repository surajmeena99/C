#include<stdio.h>

int main(){
    char name[20];
    int age;
    FILE* fptr;
    
    fptr = fopen("nameAge.bin", "rb");
    

    fread(&name, sizeof(name), 1, fptr);
    fread(&age, sizeof(age), 1, fptr);

    printf("name : %s\n",name);
    printf("Age: %d", age);
    
    fclose(fptr);
    return 0;
}
