#include<stdio.h>
int getfactorial(int x){
    if(x>1){
        return x* getfactorial(x-1);
    }
}
main(){
    int factorial;
    factorial = getfactorial(5);
    printf("Factorial = %d", factorial);

    // printf("Factorial=%d", getfactorial(5));
}