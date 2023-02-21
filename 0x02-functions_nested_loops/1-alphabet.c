#include "main.h"
/**
 * print_alphabet-function that prints alphabets in lowercae
 * return 0
 */

void print_alphabet(void);
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_puchar(alpha);

	}
	_putchar('\n');
	return (0);
}
