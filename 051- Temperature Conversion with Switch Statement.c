#include <stdio.h>
int main ()
{
    int choice;
    float temp, ConvertedTemp;

    printf("There is two converting option. Please choose anyone: \n");
    printf("Option 1. Celsius to Fahrenheit. \n");
    printf("Option 2. Fahrenheit to Celsius. \n");
    printf("Enter your choose option: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Enter a Celsius scale temperature: ");
        scanf("%f", &temp);
        ConvertedTemp = 32 + (1.8*temp);
        printf("The Fahrenheit Scale temperature is: %f\n", ConvertedTemp);
        break;
    }
    case 2:
    {
        printf("Enter a Fahrenheit scale temperature: ");
        scanf("%f", &temp);
        ConvertedTemp = 0.5556 * (temp-32);
        printf("The Celsius Scale temperature is: %f\n", ConvertedTemp);
        break;
    }
    default:
        printf("You pressed the wrong option.");
    }


    getch ();
}
