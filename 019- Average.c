#include <stdio.h>
int main()
{
    int num1, num2, sum;
    float average;
    printf("Take two integer number: ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num2;
    printf("The sum is = %d\n", sum);

    average = (float)sum/2; // This is called type Casting in c Language.
    printf("The average of the sum is: %.2f", average);

    getch();
}
