#include<stdio.h>

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(A)/sizeof(A[0]);

    printf("Array Elements: ");
    for(int i=0; i<n; i++){
        printf(" %d ",A[i]);
    }
    printf("\nNumber of Elements in Array: %d",n);
    return 0;
}