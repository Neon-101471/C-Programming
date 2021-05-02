#include <stdio.h>
int main ()

{
    FILE *file;
    char ch[50];
    file = fopen("Bangladesh.txt","r");

    if (file == NULL)
    {
        printf("The file doesn't exist.");
    }
    else
    {
        printf("The file is Open.\n");

        while(!feof(file))
        {
            fgets(ch,25,file);
            printf("%s\n", ch);
        }
        fclose(file);
    }
    getch ();
}

