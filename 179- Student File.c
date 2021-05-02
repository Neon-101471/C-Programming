#include <stdio.h>
int main ()

{
    FILE *file;
    char name[25];
    int age,phonenum,i,n;

    file = fopen("179- Student.txt","a");

    if (file == NULL)
    {
        printf("The file doesn't exist.\n");
    }
    else
    {
        printf("The file is Open.\n");

        printf("How many students do you want to listed your document? ");
        scanf("%d", &n);

        for (i=1; i<=n; i++)
        {
            printf("Enter the Students name: ");
            scanf("%s", &name);

            printf("Enter the Students age: ");
            scanf("%d", &age);

            printf("Enter the Students Phone Number: ");
            scanf("%d", &phonenum);

            fprintf(file,"%s\t\t%d\t%d\n",name,age,phonenum);
        }

        fclose(file);
    }


    getch ();
}
