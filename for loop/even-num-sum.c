#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("enter upper limit:");
    scanf("%d", &n);
    for ( i = 2; i <=n; i+=2)
    {
        printf("%d \n",i);
        sum+=i;
    }
    printf("The sum of even numbers are: %d \n", sum);
    return 0;    
}