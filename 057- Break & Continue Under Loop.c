#include <stdio.h>
int main ()
{
    int i;
    for (i=25; i<50; i++)
    {
        if(i%5==0)
            continue;

        printf("%d\n", i);

        if(i==39)
           break;

    }

    getch ();
}
