#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = "Hello";
    char str2[] = " World!";

    strcat(str1, str2);  //Concatenat str2 to str1
    
    printf("%s", str1);
    return 0;
}