#include<stdio.h>

int main(){
    int pr;
    printf("Enter your percentage:");
    scanf("%d", &pr);
   
    if(pr >= 90 ){
        printf("distiction");
    }
    else if(pr >=75 && pr <=90) {
        printf("1st class");
    }
    else if(pr >=60 && pr <=75) {
        printf("2nd class");
    }
    else if(pr >=50 && pr <=60) {
        printf("3rd class");
    }
    else if(pr <50) {
        printf("fail");
    }
    else{
        printf("invalid input");
    }
    return 0;
}