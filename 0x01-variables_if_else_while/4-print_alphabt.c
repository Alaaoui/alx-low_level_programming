#include <ctype.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Returns to 0
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else 
{
putchar (lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
