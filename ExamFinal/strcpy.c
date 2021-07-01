#include <unistd.h>
char *strcpy(char *dest, char *src)
{
	int idk;
	int miss;

	idk = 0;
	miss = 0;
	while (src[idk])
	{
		dest[miss] = src[idk];
		idk++;
		miss++;
	}
	dest[miss] = '\0';
	return (dest);
}
