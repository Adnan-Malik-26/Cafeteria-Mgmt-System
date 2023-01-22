#include <stdio.h>

void main()
{
    int a,b;
    int sum,diff,prod,quot;
    int choice;
    printf("Please Enter Two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Please Enter Your Choice: ");
    scanf("%d",&choice);


    switch (choice)
    {

    case 1:
        sum=a+b;
        printf("%d \n",sum);
        break;
    case 2:
        diff = a-b;
        printf("%d\n",diff);
        
    case 3:
        prod=a*b;
        printf("%d\n",prod);
        break;
    case 4:
        quot=a/b;
        printf("%d\n",quot);
        break;

    default:
        printf("Your Choice is Wrong.");
        break;
    }


}