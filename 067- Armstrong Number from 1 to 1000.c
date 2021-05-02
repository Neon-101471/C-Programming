#include <stdio.h>
int main ()
{
    int i, r, initialNum, finalNum, temp, sum = 0;
    printf("Enter the initial and final number: ");
    scanf("%d %d", &initialNum, &finalNum);

    printf("The Armstrong Numbers (%d - %d) are =\t", initialNum, finalNum);
    for (i=initialNum; i<=finalNum; i++)

    {

        temp = i;

        while (temp != 0)
        {
            r = temp%10;
            sum = sum + (r*r*r);
            temp = temp/10;
        }

        if (sum == i)
            printf("%d\t", i);
        sum = 0;
    }

    getch ();
}
