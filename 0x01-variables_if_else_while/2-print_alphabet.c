#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Only uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}