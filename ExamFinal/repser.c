#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	ac = 4;
	if (ac == 4)
	{
		i = 0;
		while (av[1][i])
		{
			if(av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			putchar(av[1][i]);
			i++;
		}
		putchar('\0');
		return 0;
	}
}
