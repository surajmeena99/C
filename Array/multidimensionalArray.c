#include<stdio.h>

int main(){
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int row, column;
    for(row=0; row<2; row++){
        for(column = 0; column<3; column++){
            printf("%d", matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}