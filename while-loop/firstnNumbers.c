#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int i = 1;
    while(i <= n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}