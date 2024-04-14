#include<stdio.h>
#include<string.h>

main(){
    char username[20], email[20], password[20], cpassword[20];   
    printf("Enter your username:");
    gets(username);
    printf("\n Enter your email:");
    gets(email);
    printf("\n Enter your password:");
    gets(password);
    printf("\n Confirm your Password:");
    gets(cpassword);

    if(strcmp(password, cpassword) == 0){
        printf("\n Username = %s", username);
        printf("\n Email = %s", email);
        printf("\n Password = %s", password);
        printf("\n Confirm Password = %s", cpassword);
    }else{
        printf("Password and confirm password Does not matched!");
    }

}