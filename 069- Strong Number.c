#include <stdio.h>
int main ()
{
    int rem, temp, i,num, sum = 0, fact;
    printf("Enter any Positive integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;

        fact = 1;
        for (i=1; i<=rem; i++)
        {
            fact = fact *i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (num == sum)
        printf("This is A Strong Number. ");
    else
        printf("This is not A Strong Number. ");
    getch ();
}
