#include <stdio.h>

/**
 * main - accessing the different elements of an array
 *
 * Return: Always o.
 */
int main(void)
{
	int a[6];

	a[0] = 67;
	a[1] = 198;
	a[2] = 298;
	a[3] = 645;
	a[4] = 456;
	a[5] = 476;
	printf("value of a[0]: %d\n", a[0]);
	printf("value of a[1]: %d\n", a[1]);
	printf("value of a[2]: %d\n", a[3]);
	printf("value of a[3]: %d\n", a[3]);
	printf("money behind a[4]: %d\n", a[4]);
	printf("money put between a[5]: %d\n", a[5]);
	printf("Address of 'a[0]': %p\n", &(a[0]));
	printf("Address of 'a[1]': %p\n", &(a[1]));
	printf("Address of 'a[2]': %p\n", &(a[2]));
	printf("Address of 'a[3]': %p\n", &(a[3]));
	printf("Address of 'a[4]': %p\n", &(a[4]));
	return (0);
}
