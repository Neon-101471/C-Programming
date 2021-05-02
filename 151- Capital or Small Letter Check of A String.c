#include <stdio.h>
int main ()
{
    char string[100], ch;
    int i=0, small=0, digit=0, capital=0;

    printf("Enter your selected string: ");
    gets(string);

    while ((ch=string[i]) != '\0')
    {
       if (ch>64 && ch<91)
        capital++;

       else if (ch>96 && ch<123)
        small++;

        else if (ch >= '0' && ch<= '9')
        digit++;

        i++;
    }

    printf("The number of capital letter = %d\n", capital);
    printf("The number of small letter = %d\n", small);
    printf("The number of digit = %d\n", digit);

    getch ();
}
