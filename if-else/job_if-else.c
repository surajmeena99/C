#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
   
    if(age < 18){
       printf("you are not eligible for job.");
    }
    else{
        if(age >18 && age <50){
            printf("you are eligible for job.");
        }
        else{
            printf("you are ready for retirment");
        }
    }
    return 0;
}