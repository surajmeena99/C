#include<stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("filename.txt", "w");
    // fptr = fopen("C:\\Users\\hp\\Desktop\\DataBase\\filename.txt", "w");

    fclose(fptr);

    return 0;
}
