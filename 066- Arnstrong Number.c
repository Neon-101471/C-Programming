#include <stdio.h>
int main ()

{
    int num, temp, r, sum = 0;
    printf("Enter any positive number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        r = temp%10;
        sum = sum + (r*r*r);
        temp = temp/10;
    }
    if (num == sum)
        printf("This is an Armstrong Number. ");
    else
        printf("This is not an Armstrong Number. ");
    getch ();
}
