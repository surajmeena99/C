#include<stdio.h>

void main(){
    // int main(){
    int tem;
    printf("Input days temperature:");
    scanf("%d", &tem);
   
    if(tem <0 ){
        printf("Freezing weather.\n");
    }
    else if(tem < 10) {
        printf("Very Cold weather.\n");
    }else if(tem <20) {
        printf("cold Weather.\n");
    }else if(tem <30) {
        printf("Normal in temperature.");
    }else if(tem <40) {
        printf("hot weather.\n");
    }else{
        printf("very hot weather");
    }
    // return 0;
}