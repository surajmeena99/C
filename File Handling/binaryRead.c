#include<stdio.h>

struct threeNum{
    int n1, n2, n3;
    char name[20];
};

int main(){
    struct threeNum num;
    FILE* fptr;
    
    fptr = fopen("fileName.bin", "rb");

    for(int i=1; i<5; i++){
        fread(&num, sizeof(struct threeNum), 1, fptr);

        printf("n1: %d\tn2: %d\tn3: %d \n",num.n1, num.n2, num.n3);
    }

    printf("Name: %s\n",num.name);

    fclose(fptr);
    return 0;
}
