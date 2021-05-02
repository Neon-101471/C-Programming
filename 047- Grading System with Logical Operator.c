#include <stdio.h>
int main ()

{
    int marks;
    printf("Enter the Obtained marks: ");
    scanf("%d", &marks);

    if (marks <0 || marks >100 )
        printf("This marks is Invalid");

        else if (marks>79 && marks <=100)
            printf("Got A+");

            else if (marks>69 && marks <80)
            printf("Got A");

            else if (marks>59 && marks <70)
            printf("Got A-");

            else if (marks>49 && marks <60)
            printf("Got B");

            else if (marks>39 && marks <50)
            printf("Got C");

            else if (marks>32 && marks <40)
            printf("Got D");

            else
                printf("The student is Fail");


    getch ();
}
