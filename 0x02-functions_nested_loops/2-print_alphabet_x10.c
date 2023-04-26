#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
char tench;
int i;


i = 0;


while (i < 10)
{
tench = 'a';
while (tench <= 'z')
{
_putchar(tench);
tench++;
}
_putchar('\n');
i++;
}
}
