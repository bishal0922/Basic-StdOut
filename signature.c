/*
Name: Bishal Giri
This is a program which prints both my unofficial and official email signatures.
*/

#include <stdio.h>

//function declaration
void unofficial_s();
void official_s();

int main(){
    printf("This program will print my two email signatures.\n");

    printf("This is my unofficial email signature:\n\n");
    unofficial_s(); //function call

    printf("\n\nThis is my official email signature:\n\n");
    official_s(); //function call

    printf("\nBye\n");
    return 0;
}

//function definition
void unofficial_s(){
    printf("Best,\nBishal\n");
}

//function definition
void official_s(){
    printf("Bishal Giri\n");
    printf("Class of 2025\n");
    printf("Computer Science Major\n");
    printf("University of Texas at Arlington\n");
}
