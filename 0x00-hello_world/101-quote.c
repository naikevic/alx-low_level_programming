#include <stdio.h>
#include <unistd.h>
/**
 * main - prints exactly "and that piece of art is useful"
 * -Dora a Korpar, 2015-10-19",
 *  followed by a new line. to the standard error.
 *  Return: Always 0 (Sucess)
 */
int main(void)
{
	write(2, "and that piece of art is useful\' - Dora Korpar, 2015-10-19\nn", 59);
	return (1);
}
