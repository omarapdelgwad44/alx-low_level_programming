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
n = rand();
int lastDigit = n % 10; // get the last digit of n
printf("Last digit of %d is ", n);
if (lastDigit > 5)
printf("%d and is greater than 5\n", lastDigit);
else if (lastDigit == 0)
printf("0 and is 0\n");
else
printf("%d and is less than 6 and not 0\n", lastDigit);

