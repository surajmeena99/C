#include<stdio.h>
int main(){
    int i,n,factorSum=0;
    printf("enter any number to check perfect number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if (n % i == 0)
        {
            factorSum +=i;
        }   
    }
    
    if (factorSum == 2*n && n > 0)
    {
        printf("%d is a perfect number", n);  //example= 6, 28 etc.
    }else{
        printf("%d is not a perfect number", n);
    }
    return 0;
}