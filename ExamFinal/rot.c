#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int rot(char c)
{
	if((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}

int main(int ac, char **av)
{
	if (ac == 2)
		while(*av[1])
			putchar(rot(*av[1]++));
	putchar('\n');
	return (0);
}
