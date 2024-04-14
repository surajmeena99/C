#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int i = 1;
    printf("The odd numbers are:\n");
    while(i < n){

        if(i % 2 !=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}