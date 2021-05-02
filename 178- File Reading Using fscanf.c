#include <stdio.h>
int main ()

{
    FILE *file;
    char fname[10];
    char mname[10];
    char lname[10];
    int age;

    file = fopen("178- Bangladesh.txt","r");

    if (file == NULL)
    {
        printf("The file doesn't exist.");
    }
    else
    {
        printf("The file is Open.\n");
        fscanf(file, "%s %s %s\t%d", &fname,&mname,&lname,&age);
        printf("%s %s %s\t%d",fname,mname,lname,age);
        fclose(file);
    }
    getch ();
}


