#include <unistd.h>

int sox(char c)
{
	char index;

	if (c >= 'A' && c <= 'Z')
	{
		index = c + 32;
		return (index);
	}
	if (c >= 'a' && c <= 'z')
	{
		index = c - 32;
		return (index);
	}
	else
	{	
		index = c;
		return (index);
	}
}

int main(int ac, char **av)
{
	char index;
	int i;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	while (av[1][i])
	{
		index = sox(av[1][i]);
		write(1, &index, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
