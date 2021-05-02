#include <stdio.h>
int main ()
{
    char ch;
    printf("Give me a Character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("This is Capital Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("This is Small Letter");
    else
        printf("This is not a Letter");

    getch ();
}
