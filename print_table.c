/*
Name: Bishal Giri
Program that demonstrates function calls and formatted printing.
It takes the quantity and price of each item and prints the total item within a table in a structured manner.
*/

#include <stdio.h>

//function declaration
float print_row(int quantity, float price);

int main(){
    int qty1, qty2;
    float price1, price2;
    printf("Enter first item price: ");
    scanf("%f", &price1);
    printf("Enter first item count: ");
    scanf("%d", &qty1);
    printf("Enter 2-nd item price: ");
    scanf("%f", &price2);
    printf("Enter 2-nd item count: ");
    scanf("%d", &qty2);
    printf("Summary:\n");
    print_row(qty1, price1); //function call
    print_row(qty2, price2); //function call
    return 0;
}

//function definition
float print_row(int quanity, float price){
    printf("|%8.2f|%5d|%15.3f|\n", price, quanity, price*quanity);
    printf("--------------------------------\n");
}
