#include<stdio.h>

int main(){
    char c;
    printf("enter your alphabet:");
    scanf("%c", &c);
   
    if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c =='u'){
        printf("it is vowel");
    }
    else{
        printf("it is not vowel");
    }
    return 0;
}