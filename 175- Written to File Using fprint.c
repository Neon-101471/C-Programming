#include <stdio.h>
int main ()
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("Bangladesh.txt", "a");

    if (file == NULL)
        printf("The file doesn't exist");

    else
    {
        printf("The file is open.\n");
        printf("Enter your Name: ");
        gets(name);
        printf("Enter your Age: ");
        scanf("%d", &age);

        fprintf(file,"Name = %s & Age = %d\n", name,age);
        printf("The file is written Succesfully.\n");
        fclose(file);
    }

    getch ();
}

