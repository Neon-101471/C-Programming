#include <stdio.h>
int main ()
{
    char str1[50] = "level";
    char str2 [50];

    int i=0, j=0, len=0, d;

    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    printf("The length of str1 is = %d\n\n", len);

    for (j=0, i= len-1; i>=0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';

    printf("str1 is = %s\n", str1);
    printf("str2 is = %s\n\n", str2);

    d = strcmp(str1,str2);

    if (d==0)
        printf("The string is Palindrome.");
    else
        printf("This string is not palindrome.");

    getch ();
}

