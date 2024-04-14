#include<stdio.h>
int main(){
    printf("The multiplication table of 5:\n");
    int i = 1;
    do{
        printf("5 X %d = %d\n",i,5*i);
        i++;
    }while(i <= 10);
    return 0;
}