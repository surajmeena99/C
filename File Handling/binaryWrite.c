#include<stdio.h>

struct threeNum{
    int n1, n2, n3;
    char name[20];
};

int main(){
    struct threeNum num;
    FILE* fptr;
    
    fptr = fopen("fileName.bin", "wb");

    printf("Enter your name:");
    scanf("%s", &num.name);
    
    for(int i=1; i<5; i++){
        num.n1 = i;
        num.n2 = 5*i;
        num.n3 = 5*i+1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }

    fclose(fptr);
    return 0;
}
