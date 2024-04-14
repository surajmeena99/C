#include<stdio.h>
#include<string.h>

main(){
    char s1[20] = "Hello Students";
    char s2[20];

    strcpy(s2, s1);
    printf("%s", s2);
}