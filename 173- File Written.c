#include <stdio.h>
int main ()
{
    FILE *file;
    char name[50] = "I'm Muslim and Bangladeshi";
    int length = strlen(name);
    int i;

    file = fopen("Bangladesh.txt", "w");

    if (file == NULL)
        printf("The file doesn't exist");

    else
    {
        printf("The file is open.\n");
        for (i=0; i<length; i++)
        {
            fputc(name[i], file);
        }
        printf("The file is written Succesfully.\n");
        fclose(file);
    }

    getch ();
}
