#include<stdio.h>

int main(){
    int a, b, sum=0, *p, *q ;

    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;

    printf("Addition: %d\n", sum);

}