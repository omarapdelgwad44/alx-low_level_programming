#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
if (i != j && i / 10 < j / 10 && !(i == 0 && j == 1))
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(',');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
}
}
putchar('\n');
return (0);
}
