#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program 
 * This program will assign a random number to the variable n and print the last digit of the number stored in the variable
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d and is ", n, abs(n) % 10);
if (abs(n) % 10 > 5)
printf("greater than 5\n");
else if (abs(n) % 10 == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
