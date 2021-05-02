#include <stdio.h>
int main ()
{
    int number [10], n, i, checkItem, position = -1;
    printf("Hoy many items do you want to take: ");
    scanf("%d", &n);

    printf("Please enter the items: ");


    for (i=0; i<n; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("\nThe items you have pressed: \t");
    for (i=0; i<n; i++)
    {
        printf("%d\t", number[i]);
    }

    printf("\n\nEnter the checkItem: ");
    scanf("%d", &checkItem);

    for (i=0; i<n; i++)
    {
        if (checkItem == number[i])
        {
            position = i+1;
            break;
        }
    }
    if (position == -1)
        printf("\nSorry! it's not found. ");
    else
        printf("\nThe number %d is found at %d position. ", checkItem, position);

    getch ();
}
