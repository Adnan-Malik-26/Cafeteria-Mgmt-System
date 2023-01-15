#include <stdio.h> 
#include <string.h> 
#include <conio.h> 

 
int main() 
{ 
    char username[15]; 
    char password[12]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"user")==0&&strcmp(password,"pass")==0){ 

        printf("\nWelcome.Login Success!"); 
} 
    else{ 
    printf("\nWrong Password or Username"); 
} 
 
 
 
 
 
    return 0; 
 
} 
