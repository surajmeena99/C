#include<stdio.h>

int main(){
    char txt[] = {'H', 'e', 'l', 'l', 'o', '\0'};  //String are actually arrays in C language.

    printf("%s", txt);
    return 0;
}