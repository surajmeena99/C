#include<stdio.h>

int main(){
    char name[20];

    printf("Enter Your Name:");
    scanf("%s", &name);

    printf("Name:%s\n",name);
    printf("Namech:%c\n",name[2]);
    return 0;
}