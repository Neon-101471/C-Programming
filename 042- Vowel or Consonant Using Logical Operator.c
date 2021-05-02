#include <stdio.h>

int main ()
{
    char ch;
    printf("Take a Character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("The letter you have taken is Vowel");
    else
        printf("The letter you have taken is Consonant");

    getch ();
}


