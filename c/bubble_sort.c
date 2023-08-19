#include <stdio.h>
int main()
{
   int array[100], n, b, c, swap;
   printf("Enter number of elements\n");
   scanf("%d" , &n);

   printf("Enter %d integers\n", n);

   for(b = 0; b < n; b++)
	scanf("%d", &array[b]);

   for (b = 0 ; b < n - 1; b++)
   {
     for (c = 0 ; c < n - b - 1; c++)
     {
	if (array[c] > array[c+1])
	{
	   swap       = array[c];
	   array[c]   = array[c+1];
	   array[c+1] = swap;
	}
      }
   }
   printf("Sorted list in ascending order:\n");

   for (b = 0; b < n; b++)
	printf("%d\n", array[b]);

   return 0;
}

