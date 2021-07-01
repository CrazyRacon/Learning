#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int idk;

	
	idk = 9;
	while (idk > -1)
	{
		putchar(idk + '0');
		idk--;
	}
	write(1, "\n", 1);
	return (0);

}
