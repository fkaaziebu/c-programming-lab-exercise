/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int order = 0;
    int time = 0;
    float cost = 0;
    
    printf("WELCOME TO ANNE'S FAST-FOOD\nWhat would you like to order?\n");
    
    int menu = 0;
    do {
        printf("1 - Noodles\n2 - Jollof\n3 - Fried Rice\n4 – Potato Chips \n5 - Enquiries\n");
        scanf("%d", &menu);
        
        if (menu == 1) {
            time += 10;
            cost += 9.99;
        } 
        else if (menu == 2) {
            time += 15;
            cost += 11.99;
        }
        else if (menu == 3) {
            time += 20;
            cost += 14.99;
        } 
        else if (menu == 4) {
            time += 15;
            cost += 18.99;
        }
        
        
        if (menu == 5) {
            printf("A customer service agent will be with you soon\n");
        } 
        else if (menu == 1 || menu == 2 || menu == 3 || menu == 4){
            printf("Waiting time is %d minutes and cost is GHS%0.2f", time, cost);
        }
        else {
            printf("Invalid entry\n");
        }
        
        int option = 0;
        printf("\n\nWould you like anything else?\n1 - Yes\n2 - No\n");
        scanf("%d", &option);
        if (option == 1) {
            order += 1;
        } else {
            order = 0;
        }
        
        
    } while (order > 0);
    

    printf("\nKindly wait for your order!");
    for (int i = time; i > 0; i-- ) {
        printf("\nCountdown time %d", i);
        sleep(1);
    }
    
    printf("\nHere is your order\nThanks for coming to Anne's fast-food.");
    return 0;
}