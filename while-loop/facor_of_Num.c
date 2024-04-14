#include<stdio.h>
int main(){
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("factors of %d are:\n",n);
    i = 1;
    while(i <= n)
    {
    if(n%i == 0){
        printf("%d\n",i);
    }
    i++;
    }
    return 0;
}