#include<stdio.h>

main(){
    int row, col;
    int n=1;
    // for(row=5; row>=1; row--){
    for(row=1; row<=5; row++){
        for(col=5; col>=row; col--){
            printf("*");
            //  printf(" %d ",n);
            //  n++;
        }
        printf("\n");
    }
}