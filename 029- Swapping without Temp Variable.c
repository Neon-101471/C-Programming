#include <stdio.h>
#include <math.h>

int main ()
{
  int num1, num2;
  printf("Enter number1: ");
  scanf("%d", &num1);
  printf("Enter number2: ");
  scanf("%d", &num2);

  num1 = num1 - num2;
  num2 = num1 + num2;
  num1 = num2 - num1;

  printf("After swapping num1 is = %d\n", num1);
  printf("After swapping num2 is = %d", num2);

  getch ();
}

