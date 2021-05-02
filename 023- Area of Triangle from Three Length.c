#include <stdio.h>
int main ()
{
    double a,b,c,s,area;

    printf("Give me the Three length of Triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of Triangle is = %.2lf", area);
    getch ();
}
