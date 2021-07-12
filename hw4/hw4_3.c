#include <stdio.h>
#include <stdlib.h>

void displayMenu();

int Calculate(char menu, int item_num);

int main(void) {
    char menu_num; //Number of the selected menu
    int item_num; //Number of selected items
    int total_price=0; //Total price of items

    while(1)
    {
        displayMenu();

        scanf(" %[^\n]", &menu_num);

        if(menu_num=='Q') break;//49-54

        else if(menu_num=='1' || menu_num=='2' || menu_num=='3' || menu_num=='4' || menu_num=='5' || menu_num=='6') 
        {
          printf("\nHow many do you want? ");
          scanf(" %d", &item_num);

          int result=Calculate(menu_num, item_num);
          total_price+=result;
        }
        else
        {
          printf("\nYou've entered something wrong. Please re-enter\n\n");
        }

        
    }

    printf("Please pay [%d]\n", total_price);
    printf("Thank you for dinner at Burger Queen!");

    return 0;
}

void displayMenu()
{
    printf("*******************************************************************************\n");
    printf("\t\t\tWelcome to Burger Queen\n");
    printf("*******************************************************************************\n");
    printf("Make your selection from the menu below :\n");
    printf("\t1. Regular hamburger 2500\n");
    printf("\t2. Bulgogi burger 2800\n");
    printf("\t3. Fish Sandwich 2700\n");
    printf("\t4. Half-pounder with cheese 3500\n");
    printf("\t5. Curly fries 1100\n");
    printf("\t6. Large soft drink 1000\n");
    printf("*******************************************************************************\n");
    printf("\tSelect 1, 2, 3, 4, 5, or 6 ===> ");
}

int Calculate(char menu, int item_num)
{
    int price[6]={2500, 2800, 2700, 3500, 1100, 1000};
    int result=0;

    switch(menu)
    {
        case '1': result=price[0]*item_num;
                 break;
        case '2': result=price[1]*item_num;
                 break;
        case '3': result=price[2]*item_num;
                 break;
        case '4': result=price[3]*item_num;
                 break;
        case '5': result=price[4]*item_num;
                 break;
        case '6': result=price[5]*item_num;
                 break;
    }

    return result;
}