
#include <stdio.h>

int main()
{
  int a = 10;
  int b = 20;
  int temp;

  printf("Swapping: a = %d, b = %d\n", a, b);

  // '=' operator ka use karke values transfer karna
  temp = a;
  a = b;
  b = temp;

  printf("after Swappig : a = %d, b = %d\n", a, b);

  return 0;
}