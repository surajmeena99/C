#include<stdio.h>

//with parameter & with return value
int averageNum(int num1, int num2, int num3, int num4, int num5){
    return (num1+num2+num3+num4+num5)/5;
}

int main(){  //here int is return type
    int a, b, c, d, e;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    double average = averageNum(a,b,c,d,e);
    printf("Average of five Numbers: %lf\n", average);
    return 0;  // here 0 is return value
}