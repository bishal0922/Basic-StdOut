/*
Name: Bishal Giri
This program calls the sum2avg function 4 times with hardcoded data and saves the results and prints them at the end.
*/

#include <stdio.h>

//function declaration
float avg();

float main()
{
    printf("This program calls the sum2avg function 4 times with hardcoded data and saves the results and prints them at the end.\n");
    //saving the results
    float first = avg(55,10);
    float second = avg(9,3);
    float third = avg(0,5);
    float fourth = avg(10,0);

    printf("The 4 averages are %0.3f, %0.3f, %0.3f, %0.3f", first, second, third, fourth);
}


//function definition
float avg(int sum, int N)
{
    printf("\t%d/%d = %0.2f\n", sum, N,sum/((float)N));
    return sum/((float)N);

}
