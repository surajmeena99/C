#include<stdio.h>

//Total size of structure is 28 bytes (structure can store values of multiple dafta types (int, char,double all).)
struct Person{
    int age;
    char name[20];
    float salary;
};
main(){
    struct Person p;
    // scanf("%d %s %f", &p.age, &p.name, &p.salary);
    // printf("Age=%d\n Name=%s\n Salary=%f", p.age, p.name, p.salary);

    printf("Enter your age:");
    scanf("%d", &p.age);
    printf("Age=%d\n", p.age);

    printf("Enter your name:");
    scanf("%s", &p.name);
    printf("Name=%s\n", p.name);

    printf("Enter your salary:");
    scanf("%f", &p.salary);
    printf("Salary=%f\n", p.salary);
}