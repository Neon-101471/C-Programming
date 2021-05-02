#include <stdio.h>
int main ()
{
    int a = 5;
    while (a--)
    {
        int num, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n", num, i, num*i);
        }
    }
    getch ();
}
