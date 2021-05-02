#include <stdio.h>
int main ()
{
    char str1[20] = "Neon-10";
    char str2[20] = "Radium-88";
    char temp[20];

    printf("Before Swapping: \n\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter Swapping: \n\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    getch ();
}
