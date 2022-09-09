#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to the value of n everytime
<<<<<<< HEAD
 * it executes and prints it. The program will also tell if  n is positive, negative or zero
=======
 * it executes and prints it. The program will also tell if
 * n is positive, negative or zero
>>>>>>> 4908c221ad2964392e6378e6472910ee3f2eda13
 * Return: 0 if (successful)
*/
int main(void)
{
<<<<<<< HEAD
    int n;
=======
	int n;

>>>>>>> 4908c221ad2964392e6378e6472910ee3f2eda13
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
