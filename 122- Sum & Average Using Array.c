#include <stdio.h>
int main ()

{
    int i, sum =0 , number[100], n;
    printf("How many numbers do you want to take: ");
    scanf("%d", &n);

    printf("Your numbers are pressed here: ");

    for (i=0; i<n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i=0; i<n; i++)

    {
        sum = sum + number[i];
    }
    printf("The sum of 5 numbers is: %d\n", sum);
    printf("The average of 5 numbers is: %.2f", (float)sum/n);

    getch ();
}
