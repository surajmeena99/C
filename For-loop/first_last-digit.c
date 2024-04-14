#include<stdio.h>
int main(){
    int n,f,l;
    printf("Enter any number:");
    scanf("%d", &n);
    f = n;
    while (f >= 10)
    {
        f = f / 10;
    }
    printf("firstdigit = %d \n",f);
    // l = n;
    l = n % 10;
    printf("lastdigit = %d",l);
    return 0;
}