#include "main.h"
/**
 * print_alphabet-function that prints alphabets in lowercae
 * return 0
 */

void print_alphabet(void);
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);

	}
	_putchar('\n');
	return (0);
}
