#include<stdio.h>

//with parameter & with return value
int sum(int n1, int n2){
    // return n1 + n2;
    int ans;
    ans = n1 + n2;
    return ans;
}
int main(){
    int a,b,result;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    result = sum(a,b);
    printf("The result is: %d", result);
    return 0;
}





