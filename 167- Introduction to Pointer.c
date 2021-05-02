#include <stdio.h>
int main()

{
    int x;
    x=1;

    int *pointer;
    pointer = &x;

    printf("The value of x = %d\n", x);
    printf("The Address of x = %d\n", &x);

    printf("Pointer Contain Address = %d\n", pointer);
    printf("The Address of pointer = %d\n", &pointer);
    printf("Pointer Contain Value = %d\n", *pointer);

    getch ();
}
