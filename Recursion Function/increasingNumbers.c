#include<stdio.h>
int print_1to10(int x){
    if(x<=10){
        printf("\n%d",x);
        print_1to10(x+1);
    }
}
main(){
    print_1to10(1);
}