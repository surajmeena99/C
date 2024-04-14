#include<stdio.h>
int main(){
    int n,r,p,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    p = n;
    while(n > 0){
        r = n%10;
        sum = (sum*10) + r;
        n = n/10;
    }
    if(p == sum){
        printf("Number is Palindrome.");
    }else{
        printf("Number is not Palindrome.");
    }
    return 0;
}

// 121, 313, 525