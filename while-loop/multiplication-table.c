#include<stdio.h>
int main(){
    printf("The multiplication table of 5:\n");
    int i = 1;
    while(i <= 10){
        printf("5 X %d = %d\n",i,5*i);
        i++;
    }
    return 0;
}