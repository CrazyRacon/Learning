#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 4096


char *ft_purser(char *txt)
{
	int i, q, z, ret;
	int d_f;
	char *buf = (char *)malloc(BUF_SIZE + 1);
	int x = 100;
	int y = 200
	char array_buf[x][y];

	i = 0;
	while (i <= BUF_SIZE)
	{
		buf[i] = '\0';
		i++;
	}

	i = 0;
	q = 0;
	while (i <= x)
	{
		q = 0;
		while (q <=  y)
		{
			array_buf[i][q] = '\0';
			q++
		}
		i++;
	}

	d_f = open(*txt, O_RDONLY);
	if (d_f == -1)
	{
		write(1, &"error", 5);
		return ('\0');
	}
	ret = read(d_f, buf, BUF_SIZE);
	if (close(d_f) == -1)
	{
		write(1, &"error", 5);
		return ('\0');
	}

	i = 0;
	q = 0;
	while (buf[i] !- '\0')
	{
		z = 0;
		while (buf[i] != '\n')
		{
			array_buf[q][z] = buf[i];
			i++;
			z++;
		}
		i++;
		q++;
	}

	while(i <= BUF_SIZE)
	{
		free(&buf[i]);
		i++;
	}

	return (array_buf)
}