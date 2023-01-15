#include <stdio.h>
#include <string.h>
int main()
{
    char username[10],password[10];
    int order,choice;
    int total=0;
    int no_of_items;
    int chow=0,pizza=0,pasta=0,momos=0,rice=0;
    int pizza_total,pasta_total,momos_total,chowmein_total,fried_rice_total;
    
    adnan:
    printf("Username: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s",&password);

    

    if (strcmp(username,"user")==0)
    {
        if (strcmp(password,"pass")==0)
        {
            printf("Login Successful.");
            system("cls");
            
{
    printf("**********WELCOME TO THE CAFETERIA**********\n");
    printf("\t\t*****MENU*****\n");
    printf("Product             Price\n");
    printf("[1] Pizza             50\n");
    printf("[2] Pasta            100\n");
    printf("[3] Momos            150\n");
    printf("[4] Chowmein         200\n");
    printf("[5] Fried Rice       150\n");



        repeat:
        printf("Please Enter Your Choice: ");
        scanf("%d",&choice);
        
    switch (choice)
    {
         case 1:
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            pizza_total = pizza +(50*no_of_items);
            total = total+pizza_total;
            break;
    
        case 2:
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            pasta_total = pasta +(100*no_of_items);
            total = total+pasta_total;
            break;

        case 3:
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            momos_total = momos +(150*no_of_items);
            total = total+momos_total;
            break;
    
        case 4:
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            chowmein_total = chow+(200*no_of_items);
            total = total+chowmein_total;
            break;

        case 5:
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            fried_rice_total = rice+(150*no_of_items);
            total = total+fried_rice_total;
            break;
    
        default:
            printf("Sorry! The choice is Invalid.\n");
            break;
    }

    printf("Please Enter 1 if you want to order more and enter 0 for your Bill: ");
    scanf("%d",&order);
    

    if (order==1)
    {
        goto repeat;
    }
    else
    {
        printf("Thank You For Ordering.\n");
        printf("Total is Rs.%d.\n",total);
    }
    
    system("pause");  
    return 0;
    
}

        }
        else
        {
            printf("Wrong Password, Try Again.\n");
            goto adnan;
        }
        
        
    }
    else
    {
        printf("User Does Not Exist, Try Again.\n");
        goto adnan;
    }
    
    

}