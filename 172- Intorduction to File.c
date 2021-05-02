#include <stdio.h>
int main ()
{
    FILE *file;
    file = fopen("Bangladesh.txt", "w");

    if (file == NULL)
        printf("The file doesn't exist");

    else
    {
        printf("The file is open");
        fclose(file);
    }

    getch ();
}
