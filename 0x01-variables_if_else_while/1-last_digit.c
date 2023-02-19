#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* randon number assignment to variable
*Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	printf("Random number: %d\n", n);
    printf("Last digit: %d\n", n % 10);

    return (0);
}

	   
