#include<stdio.h>
int main(){
    int n,f;
    printf("Enter any number:");
    scanf("%d",&n);
    f = n;
    while (f >= 10)
    {
        f = f/10;
    }
    printf("first digit:%d",f);
    return 0;
}