#include <ctype.h>
#include <stdio.h>
/**
 *
 * main - entry point
 *
 *
 *Returns to 0
 */
int main(void){
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar (lowerCase);
lowerCase += 1;
}
while (upperCase <= 'Z')
{
putchar (upperCase);
upperCase += 1;
}
putchar('\n');
return(0);
}
