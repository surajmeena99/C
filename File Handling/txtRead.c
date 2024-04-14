#include<stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("filename.txt", "r");    //open a file in read mode
    
    char myString[100];  //store the content of the file

    // fgets(myString, 100, fptr);  //Read the content and store it inside myString
    // printf("%s", myString);  // To read the first line of the file 
    
    if(fptr != NULL){
        while(fgets(myString, 100, fptr)){   //To read every line of the file
            printf("%s",myString);
        }
    }else{
        printf("Not able to open the file."); //If the file does not exist
    }

    fclose(fptr);

    return 0;
}
