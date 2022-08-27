/*
Bishal Giri
This program will read the calories from each meal over 2 day and print the total amount of calories consumed from breakfast, lunch, and dinner.
*/

//function declaration
int day_calories();

int main(){
    printf("This program will read the calories from each meal over 2 day, and print the total\n");
    printf("The total calories over the last two days are: %d", day_calories()+day_calories()); //function call(s) which adds the calories over 2 days
}

//function definition
int day_calories(){

    //variable declaration
    int breakfast, lunch, dinner;

    //reading the user for their breakfast intake
    printf("Enter the breakfast calories: ");
    scanf("%d", &breakfast);

    //reading the user for their lunch intake
    printf("Enter the lunch calories: ");
    scanf("%d", &lunch);

    //reading the user for their dinner intake
    printf("Enter the dinner calories: ");
    scanf("%d", &dinner);

    //returning the total calorie for one day
    return breakfast+dinner+lunch;
}
