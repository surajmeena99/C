#include<stdio.h>
int main(){
    int n,r;
    printf("Enter any number:");
    scanf("%d", &n);
    r = n % 10;
    printf("lastdigit = %d",r);
    return 0;
}