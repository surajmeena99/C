#include<stdio.h>
int main(){
    int n,l;
    printf("Enter any number:");
    scanf("%d",&n);
    l = n;
    l = n%10;
    printf("last digit:%d",l);
    return 0;
}