#include<stdio.h>

int main(){
    char c;
    printf("enter any character:");
    scanf("%c", &c);
    if(c >='A' && c <='Z' || c >='a' && c <='z'){
        printf("%c is alphabet.",c);
    }
    else if(c >= '0' && c <= '9') {
        printf("%c is digit.", c);
    }else{
        printf("%c is special character.",c);
    }
    return 0;
}