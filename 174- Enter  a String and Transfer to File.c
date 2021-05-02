#include <stdio.h>
int main ()
{
    FILE *file;
    char name[50];

    file = fopen("Bangladesh.txt", "a");

    if (file == NULL)
        printf("The file doesn't exist");

    else
    {
        printf("The file is open.\n");
        printf("Enter your Name: ");
        gets(name);
        fputs(name,file);
        printf("The file is written Succesfully.\n");
        fclose(file);
    }

    getch ();
}
