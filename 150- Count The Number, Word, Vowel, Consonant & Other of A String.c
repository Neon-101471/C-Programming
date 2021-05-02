#include <stdio.h>
int main ()
{
    char string[100], ch;
    int i=0, word=1, digit=0, vowel=0, consonant=0, other=0 ;

    printf("Enter your selected string: ");
    gets(string);

    while ((ch=string[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            consonant++;

        else if (ch >= '0'  && ch <= '9')
            digit++;
        else if (ch == ' ')
            word++;
        else
            other++;


        i++;
    }

    printf("The number of Vowel = %d\n", vowel);
    printf("The number of Consonant = %d\n", consonant);
    printf("The number of digit = %d\n", digit);
    printf("The number of word = %d\n", word);
    printf("Other = %d\n", other);

    getch ();
}
