#include<stdio.h>

int main(){
    int id, pw;
    printf("plz enter the id:");
    scanf("%d", &id);
    switch (id){
        case 0:
        printf("enter your password:");
        scanf("%d", &pw);
        switch (pw)
        {
        case 1:
        printf("welcome to the page");
        break;
        default:
        printf("incorrect password");
        break;            
        }
        break;
        default:
        {
            printf("incorrect id");
            break;
        }
    }
}