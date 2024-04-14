#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i = n;
    while(i > 0){
        printf("%d\n",i);
        i--;
    }
    return 0;
}