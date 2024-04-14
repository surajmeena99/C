#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    do{
        r = n%10;
        sum = sum + r;
        n = n/10;
    }while(n > 0);
    printf("Sum of Digits:%d",sum);

    return 0;
}