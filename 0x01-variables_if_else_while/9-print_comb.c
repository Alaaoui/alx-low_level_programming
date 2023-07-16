#include <ctype.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Returns to 0
 */

int main(void)
{
int num = '0';
while (num <= 9)
{
putchar ((num % 10) + '0');
if (num != '9')
{
putchar(',');
putchar(' ');
}
++num;
}
putchar('\n');
return (0);
}
