#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld bytes(s)\n", sizeof(a));
	printf("Size of a int: %ld bytes(s)\n", sizeof(b));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(d));
	printf("Size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
