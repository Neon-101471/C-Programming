#include <stdio.h>
int main ()

{
    int array[5] = {10, 20, 30, 40, 50};

    int *pointer, i;
    pointer = array[i];

    for (i=0; i<5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
        pointer++;
    }

    getch ();
}
