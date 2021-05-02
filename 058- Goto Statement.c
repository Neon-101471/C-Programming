#include <stdio.h>
int main ()
{
    int i;
    i = 9;

    print:
        printf("%d\t", i);
        i++;

        if(i<50 && i%2==0)
            goto print;

        getch ();
}
