#include <stdio.h>
#include <math.h>

int main ()
{
  int num1, num2;
  int temp;
  num1 = 10;
  num2 = 88;
  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("After swapping num1 = %d\n", num1);
  printf("After swapping num2 = %d", num2);

  getch ();
}
