#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int check(char c)
{
	int idk;

	if (c >= 'a' && c <= 'z')
		idk = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		idk = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int main(int ac, char **av)
{
	int index;
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][idk])
	{
		index = check(av[1][i]);
		while (index > 0)
		{
			putchar(av[1][i]);
			index--;
		}
		idk++;
	}
	putchar("\n");
	return (0);
}	
