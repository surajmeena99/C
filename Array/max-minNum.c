#include<stdio.h>

int main(){
    int a[5];

    for(int i=0; i<5; i++){
        printf("Enter the number: ");
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=0; i<5; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("The maximum number is: %d", max);
    return 0;
}