#include<stdio.h>

int main(){
    char read_arr[5] = {};
    FILE* fptr;

    fptr = fopen("ritu_file.bin", "rb");

    for(int i=0; i<5; i++){
        fread(&read_arr[i], 1, 1, fptr);
    }

    // for(int i=0; i<5; i++){
    //     printf("0x%02x ", read_arr[i]);
    // }

    printf("\nchar_arr : %s\n",  read_arr);

    fclose(fptr);
    return 0;
}
