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
bool lucy=true,x=i;
if (i != j && i / 10 < j / 10 && !(i == 0 && j == 1))
{
natsu:
putchar(x / 10 + '0');
putchar(x % 10 + '0');
if(lucy)
{
putchar(',');
putchar(' ');
x=j;
lucy = false;
goto natsu;
}
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
}
}
putchar('\n');
return (0);
}
