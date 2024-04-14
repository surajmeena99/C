#include<stdio.h>

struct bank
{
    char name[20];
    int accountNumber;
    char ifscCode[12];
    int ATMpin;
};

int main(){
    struct bank account;

    printf("Enter the bank name: ");
    scanf("%s", &account.name);
    printf("Name= %s\n", account.name);

    printf("Enter the account number: ");
    scanf("%d", &account.accountNumber);
    printf("Account number= %d\n", account.accountNumber);

    printf("Enter the IFSC code: ");
    scanf("%s", &account.ifscCode);
    printf("IFSC Code= %s\n", account.ifscCode);

    printf("Enter the ATM pin: ");
    scanf("%d", &account.ATMpin);
    printf("ATM PIN=%d\n", account.ATMpin);

    return 0;
}