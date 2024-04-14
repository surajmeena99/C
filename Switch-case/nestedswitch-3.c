#include<stdio.h>

int main(){
    int a, b;
    printf("1.School of Computer Science\n");
    printf("2.School of Business\n");
    printf("3.School of Engineering\n");
    printf("make your selection\n");
    scanf("%d", &a);
    switch (a){
        case 1:
        break;
        case 2:
        printf("Available Departments\n");
        printf("1.Department of Commerce\n");
        printf("2.Department of purchasing\n");
        printf("make your selection\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
        printf("your chose department of commerce\n");
        break;
        case 2:
        printf("your chose department of purchasing\n");
        break;            
        }
        break;
    }
}