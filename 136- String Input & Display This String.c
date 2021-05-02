#include <stdio.h>
int main ()
{
    char name[100];
    printf("Enter your Name: ");
    gets(name);

    printf("Your Name is: %s", name);
    getch ();
}
