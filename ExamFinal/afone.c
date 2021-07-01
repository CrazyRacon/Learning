#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int idk;

	idk = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][idk])
	{
		putchar(av[1][idk]);
		idk++;
	}
	write(1, "\n", 1);
	return (0);
}
