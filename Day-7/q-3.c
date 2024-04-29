// Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.
// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 1

// Press 1 for Internet Recharge
// Press 2 for Top-up Recharge
// Press 3 for Special Recharge
// Enter your choice: 2

#include<stdio.h>
int main(){
    int choice1,choice2;
    printf("Press 1 for English \n Press 2 for Hindi \nPress 3 for Gujarati \n");
    printf("Enter your first choice : ");
    scanf("%d",&choice1);

    switch (choice1)
    {
    case 1:
        printf("For English : \n");
        printf("Press 1 for Internet Recharge \n Press 2 for Top-up Recharge \nPress 3 for Special Recharge\n");
        printf("Enter You second choice : ");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
            printf("You have successfully done Internet Recharge");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge");
            break;
        case 3:
            printf("You have successfully done Special Recharge");
            break;
        
        default:
            printf("Enter Valid Choice");
            break;
        }
        break;
    
    case 2:
        printf("For Hindi : \n");
        printf("Internet Recharge ke liye 1 dabaiye \n Top-up Recharge ke liye 2 dabaiye \nSpecial Recharge ke liye 3 dabaiye\n");
        printf("Enter You second choice : ");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.");
            break;
        
        default:
            printf("Enter Valid Choice");
            break;
        }
        break;

    case 3:
        printf("For Gujarati : \n");
        printf("Internet Recharge mate 1 dabavo \n Top-up Recharge mate 2 dabavo \nSpecial Recharge mate 3 dabavo\n");
        printf("Enter You second choice : ");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;
        
        default:
            printf("Enter Valid Choice");
            break;
        }
        break;

    default:
        break;
    }   
    return 0;
}