/*
Users-view user,add new user,edit,delete,login,change password
Catalogue
Insuarence
Serial
Acquisition


Navigation
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();
void execute_action(int action);
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

void execute_action(int action){
    switch(action){
    case 1:
        printf("List of users\n");
        break;
    case 2:
        printf("Add new user\n");
        break;
    case 3:
        printf("Edit user\n");
        break;
    case 4:
        printf("Delete user\n");
        break;
    case 5:
        printf("Change password\n");
        break;
    case 6:
        printf("Logout\n");
        break;
    case 7:
        close();
        break;
    default:
        printf("Invalid action\n");

    }
}

void close(){
    printf("Thanks for using the system\n");
    printf("Created by Vellah\n");
    printf("Bye\n");
    Sleep(2000);
    exit(0);
}
int menu()
{
   int action;
do {

        printf("Welcome friends\n");

        printf("What would you like to do\n");

        printf("1.View user\n");

        printf("2.Add new user\n");

        printf("3.Edit user\n");

        printf("4.Delete user\n");

        printf("5.Change password\n");

        printf("6.Log out\n");

        printf("7.Exit\n");

        printf("Selected action(1-7): ");

        scanf("%d",&action);
        if(action<1 || action>7){
            system("cls");
            printf("Invalid action!!! Try again\n");
        }
}while(action<1 || action>7);
}
