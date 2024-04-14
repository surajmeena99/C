#include<stdio.h>

int main(){
    int year;
    printf("enter your year:");
    scanf("%d", &year);
   
    if(year % 4 == 0){
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
    return 0;
}