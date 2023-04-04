#include "main.h"

/**
 * _abs - function to print an absolute nmber
 *
 * @a: parameter to be checked
 *
 * Return: Always a;
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
