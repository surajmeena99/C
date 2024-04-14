#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    int i = 1;
    printf("The sum of first %d numbers is:",n);

    while(i <= n){
        sum = sum + i;
        i++;
    }
    printf("%d",sum);

    return 0;
}