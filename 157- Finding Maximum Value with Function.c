#include <stdio.h>

int maximum (int MAX[])
{
    int i;
    int Maximum = MAX[0];
    for(i=1; i<5; i++)
    {
        if(Maximum<MAX[i])
            Maximum = MAX[i];
    }
    return Maximum;
}
int main ()
{
    int num []= {10,20,30,40,50};
    int MaximumValue = maximum(num);

    printf("\nThe MAXIMUM value = %d\n",MaximumValue);

    getch ();
}
