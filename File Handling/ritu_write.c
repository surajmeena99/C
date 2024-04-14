#include<stdio.h>

int main(){
    int num = 1000;
    char arr[5] = "Hello";
    FILE* fptr;

    fptr = fopen("ritu_file.bin", "wb");

    for(int i=0; i<5 ;i++){
        fwrite(&arr[i], 1, 1, fptr);
    }

    fclose(fptr);

    return 0;
}
