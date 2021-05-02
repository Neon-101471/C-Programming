#include <stdio.h>
int main()
{
    char str[50] = "I'm Muslim & Bangladeshi";
    printf("str is = %s\n\n\n", str);

    strupr(str);
    printf("str is = %s\n", str);

    strlwr(str);
    printf("str is = %s", str);

    getch ();
}
