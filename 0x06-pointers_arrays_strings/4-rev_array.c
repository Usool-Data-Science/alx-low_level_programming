#include "main.h"
/**
  * reverse_array - Fucntion that reverses an array
  * @a: the array to be reversed
  * @n: the size of that array
  *
  * Return: 0 for successful exit
  */
void reverse_array(int *a, int n)
{
	int i, front, back;

	for (i = 0; i < n / 2; i++)
	{
		front = *(a + i);
		back = *(a + n - i - 1);
		*(a + i) = back;
		*(a + n - i - 1) = front;
	}
}
