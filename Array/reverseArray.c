#include<stdio.h>

int main(){
    int n=5, A[5];

    for(int i=0; i<n; i++){
        printf("Enter A[%d]:",i);
        scanf("%d", &A[i]);
    }

    printf("Reverse Array: ");
    for(int i=n-1; i>=0; i--){
        printf(" %d ",A[i]);
    }
    return 0;
}