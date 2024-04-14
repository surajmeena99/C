#include<stdio.h>
int main(){
    int n,i,f1,f2,f3;
    printf("Enter any number:");
    scanf("%d",&n);
    i = 1;
    f1 = 0;
    f2 = 1;
    printf("%d%d",f1,f2);

    while(i < n){
        f3 = f1 + f2;
        printf("%d",f3);
        f1 = f2;
        f2 = f3;
        i++;
    }
    return 0;
}