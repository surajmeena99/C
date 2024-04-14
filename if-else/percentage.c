#include<stdio.h>

int main(){
    int sub1, sub2, sub3, sub4,sub5;
    printf("Enter sub1 marks:");
    scanf("%d", &sub1);
    printf("Enter sub2 marks:");
    scanf("%d", &sub2);
    printf("Enter sub3 marks:");
    scanf("%d", &sub3);
    printf("Enter sub4 marks:");
    scanf("%d", &sub4);
    printf("Enter sub5 marks:");
    scanf("%d", &sub5);

    int sum = sub1+sub2+sub3+sub4+sub5;
    int pr = (sum*100)/500;

    printf("your percentage is: %d \n",pr);

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