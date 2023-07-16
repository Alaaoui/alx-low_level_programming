#include <ctype.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Returns to 0
 */

int main(void)
{
int num;
char lettre;
for (num = 1; num < 10; num++)
putchar (num + '0');
for (lettre = 'a'; lettre <= 'f'; lettre++)
putchar(lettre);
putchar('\n');
return (0);
}
