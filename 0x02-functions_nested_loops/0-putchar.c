#include "main.h"
/**
 * main - print _putchar
 * is written by BryanEzeonwuka
 * Return: Always 0 (Success)
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
