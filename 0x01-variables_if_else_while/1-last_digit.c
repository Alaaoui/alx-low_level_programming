#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum =n % 10;
	if (lastnum > 5)
	{
		printf("Last didgit of %d is %d is greater than 5\n", n, lastnum);
	}
	else if (lastnum < 5)
        {
                printf("Last didgit of %d is %d is less than 5\n", n, lastnum);
        }
	else if (lastnum == 5)
        {
                printf("Last didgit of %d is %d is 0\n", n, lastnum);
        }
	return (0);
}
