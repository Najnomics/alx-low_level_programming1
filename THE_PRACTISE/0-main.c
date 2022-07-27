#include <stdio.h>

/**
 * main - using sizeof to dynamically dtermine the size of the types
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("the size of type 'char' on my computer: %u bytes\n", sizeof(char));
	printf("the size of the size 'int' on my computer: %u bytes\n", sizeof(int));
	printf("the size of the type 'f' on my computer: %u bytes\n", sizeof(float));
	printf("size of my variable n on my computer: %u\n", sizeof(n));
	return (0);
}
