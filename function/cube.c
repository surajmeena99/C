#include<stdio.h>

int findCube(int n){
    return(n*n*n);
}

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d", &n);

    int c = findCube(n);

    printf("The cube is: %d",c);

    return 0;
}