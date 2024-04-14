#include<stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("filename.txt", "a");  //open a file in append mode

    fprintf(fptr, "Hello World");
    fprintf(fptr, "\nHi everybody");

    if(fptr == NULL){
        printf("Not able to open the file.");  //print some text if the file does not exist
    }

    fclose(fptr);

    return 0;
}
