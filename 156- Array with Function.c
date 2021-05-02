#include <stdio.h>

void display(int num[])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("%d\t", num[i]);
    }

}

int main ()
{
    int number [] = {10,20,30,40,50};
    display(number);

    getch ();
}
