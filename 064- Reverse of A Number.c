#include <stdio.h>
int main ()
{
    int num, remainder, temp, sum = 0;
    printf("Enter any positive number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        remainder = temp%10;
        sum = (sum*10) + remainder;
        temp = temp/10;
    }

    printf("The reverse number = %d", sum);
    getch ();
}
