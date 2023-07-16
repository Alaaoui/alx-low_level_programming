#include <ctype.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Returns to 0
 */

int main(void)
{
int lowerCase = 'z';
while (lowerCase >= 'a')
{
putchar (lowerCase);
lowerCase -= 1;
}
putchar('\n');
return (0);
}
