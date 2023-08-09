#include<stdio.h>

int main(){
    char c;
    printf("Enter M for Male, Enter F for Female, Enter O for others:");
    scanf("%c", &c);
   
    if(c =='M' || c =='m'){
        printf("it is male");
    }
    else if(c =='F' || c =='f') {
        printf("it is female");
    } 
    else if(c =='O' || c =='o') {
        printf("it is other");
    }
    else{
        printf("non of these");
    }
    return 0;
}