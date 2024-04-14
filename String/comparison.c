#include<stdio.h>
#include<string.h>

main(){
    char s1[20], s2[20];
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);

    if(strcmp(s1, s2) == 0){
        printf("Both the strings are same");
    }else{
        printf("Both the strings are not same");
    }
}