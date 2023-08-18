#include <stdio.h>
 
int main()
{
  int i, j, f = 1;
 
  printf("Enter a number to calculate its factorial:\n");
  scanf("%d", &j);

 for (i = 5; i <= j; i++)
    f = f * i;
 
  printf("Factorial of %d = %d\n", j, f);
 
  return 0;
}
