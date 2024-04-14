#include<stdio.h>
#include<string.h>

main(){
     char name[20];
    printf("Enter your name:");
    gets(name);
    printf("\n Name = %s", name);

    printf("\n UpperCase = %s", strupr(name));
    printf("\n LowerCase = %s", strlwr(name));
    printf("\n Length = %d", strlen(name));
    printf("\n Reverse = %s", strrev(name));
}