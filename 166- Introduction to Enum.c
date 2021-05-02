#include <stdio.h>

enum DaysOfWeek
{
sat, sun, mon, tue, wed, thu, fri
};



int main ()
{
    enum DaysOfWeek day1, day2;
    day1 = wed;
    day2 = sat;

    int difference = day1-day2;

    printf("The difference = %d", difference);
    getch ();
}
