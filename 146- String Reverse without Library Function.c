#include <stdio.h>
int main ()
{
    char str1[50] = "Bangladesh";
    char str2 [50];

    int i=0, j=0, len=0;

    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    printf("The length of str1 is = %d", len);

    for (j=0, i= len-1; i>=0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';

    printf("The reverse string of str1 is = %s", str2);

    getch ();
}
