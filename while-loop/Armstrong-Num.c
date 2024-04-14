#include<stdio.h>
int main(){
    int n,r,a,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    a = n;
    while(n > 0){
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(a == sum){
        printf("Number is Armstrong.");
    }else{
        printf("Number is not Armstrong.");
    }
    return 0;
}

// 153, 370, 371, 407