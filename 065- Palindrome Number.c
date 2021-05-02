#include <stdio.h>
int main ()
{
    int num, temp, remainder, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        remainder = temp%10;
        sum = (sum*10) + remainder;
        temp = temp/10;
    }
    if (num == sum)
        printf("This is a Palindrome Number. ");
    else
        printf("This is not a Palindrome number. ");

    getch ();
}
