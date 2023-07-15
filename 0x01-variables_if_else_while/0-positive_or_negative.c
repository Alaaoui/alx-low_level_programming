#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -  verifie the numbers
 *
 *
 * more headers goes there 
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n < 0)
{
printf("%d is %s\n", n, "negative");
}
else if (n == 0)
{
printf("%d is %s\n", n, "zero");
}
if(n > 0)
{
printf("%d is %s\n", n, "positive");
}
return (0);
}
