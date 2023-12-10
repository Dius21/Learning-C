#include <stdio.h>
#include <string.h>

int main()
{
    //functions menu
    int choice = 0;
    int x;
    printf("Which function do you wanna execute?:-\n");
    printf("1. single_line_input()\nType the corresponding number:");
    x= scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            single_line_input();
            break;
        default:
			printf("Invalid choice");
    }

    return 0;
}


void single_line_input()
{
    int x;
    char usr_stmt[100] = "somewhere, somehow, your statement didn't reach till here";
     
    //prompt for statment
    printf("Enter your statement: ");

    //input statement from user
    x= scanf_s("%s", usr_stmt);
    
    //output statement
    printf("Hello world!!\n%s\nYour statement was %i charachters long", usr_stmt, (int)strlen(usr_stmt));
}