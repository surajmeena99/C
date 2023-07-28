#include<stdio.h>

int main(){
    char c;
    printf("enter any character:");
    scanf("%c", &c);
   
    if(c >='A' && c <='Z'){
        printf("%c is Uppercase alphabet.",c);
    }
    else if(c >='a' && c <='z') {
        printf("it is lowercase alphabet.", c);
    }else{
        printf("it is not a alphabet.");
    }
    return 0;
}