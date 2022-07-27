#include <stdio.h>

/**
 * main - deferencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;
	
	c = 'H';
	pp = &c;
	n = 98;
	p= &n;
	printf("value of 'c': %d\n", c, c);
	printf("address of 'c': %p\n", &c);
	return (0);

}
