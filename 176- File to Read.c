#include <stdio.h>
int main ()

{
    FILE *file;
    char ch;
    file = fopen("Bangladesh.txt","r");

    if (file == NULL)
        printf("The file doesn't exist.");
    else
    {
        printf("The file is Open.\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    getch ();
}
