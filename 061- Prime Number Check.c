#include <stdio.h>
int main ()
{
    int num, count=0, i;
    printf("Enter any positive number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        printf("This number is Prime number.");
    else
        printf("This number is not a prime number.");

    getch ();
}
