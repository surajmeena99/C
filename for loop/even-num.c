#include<stdio.h>
int main(){
    int i;
    printf("Even number between 1 to 50: \n");
    for (i = 2; i <=50; i+=2){
        printf("%d\n",i);
    }
    // for(i=1; i<=50; i++){
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }
    return 0;
}