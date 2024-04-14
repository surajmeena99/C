#include<stdio.h>

//Total size of union is 20 bytes
union Person{
    int age;
    char name[20];
    float salary;
};
main(){
    union Person p;
    
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