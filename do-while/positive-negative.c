#include<stdio.h>

int main(){
    int n;
    do{
        printf("1. First 10 positive numbers\n");
        printf("2. First 10 negative number\n");
        printf("0. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &n);

        if(n==1){

            int i=1;
            while(i<=10){
                printf(" %d ", i);
                i++;
            }
            printf("\n");

        }else if(n==2){

            int i = -1;
            while (i>= -10)
            {
                printf(" %d ", i);
                i--;
            }
            printf("\n");
            
        }else if(n == 0){
            break;
        }else{
            printf("Please Enter a valid option");
        }
    }while(n != 0);
    return 0;
}