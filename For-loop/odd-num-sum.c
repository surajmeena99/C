#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("enter upper limit:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i+=2)
    {
        printf("%d \n",i);
        sum+=i;
    }
    printf("The sum of odd numbers are: %d \n", sum);
    return 0;    
}