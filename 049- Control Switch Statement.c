#include <stdio.h>
int main ()
{
    int digit;
    printf("Give me a digit: ");
    scanf("%d", &digit);

    switch (digit)

    {
    case 0:
        printf("The digit is Zero");
        break;
    case 1:
        printf("The digit is One");
        break;
    case 2:
        printf("The digit is Two");
        break;
    case 3:
        printf("The digit is Three");
        break;
    case 4:
        printf("The digit is Four");
        break;
    case 5:
        printf("The digit is Five");
        break;
    case 6:
        printf("The digit is Six");
        break;
    case 7:
        printf("The digit is Seven");
        break;
    case 8:
        printf("The digit is Eight");
        break;
    case 9:
        printf("The digit is Nine");
        break;

    default:
        printf("Unvalid digit");
    }

    getch ();
}
