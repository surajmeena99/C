#include<stdio.h>

int main(){
    int i,n,sum=0;
    
    printf("Input value:");
    scanf("%d", &n);
    printf("The first %d nautual numbers are:\n",n);

    for ( i = 1; i <=n; i++)
    {
        printf("%d \n",i);
        sum+=i;
    }
    printf("The sum of natural numbers are: %d \n", sum);

    return 0;    
}