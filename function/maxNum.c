#include<stdio.h>

int maximum(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
int main(){
    int n1, n2, max;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    max = maximum(n1, n2);
    printf("Maximum between %d and %d is %d.\n", n1, n2, max);
    return 0;
}