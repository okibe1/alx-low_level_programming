#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quote) - 1;
	ssize_t written = 0;

	written = write(2, quote, len);

	if (written != len)
		return 1;

	return 1;
}
