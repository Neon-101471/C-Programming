#include <stdio.h>
int main ()

{
    int marks;
    printf("Enter the obtained marks: ");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
        printf("The student is Pass");
    else if (marks > 100)
        printf("This marks is not allowed. Please submit the valid marks. Thank You!");
    else
        printf("The student is Fail");

    getch ();
}
