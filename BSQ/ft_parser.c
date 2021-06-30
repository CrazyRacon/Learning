#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define BUF_SIZE 4096

int main(void)
{
	int i, q, z, ret;							//counters
	int d_f;									//дискриптер файла	
	char *buf = (char *)malloc(BUF_SIZE + 1);	//выделение памяьти для записи в масив txt файла
	char array_buf[100][200];					//двумерный масив для перезаписи даный в него
												//char *buf = (char *)calloc(BUF_SIZE, sizeof(char)); //отладка

//calloc реализация
	i = 0;
	while (i <= BUF_SIZE)						
	{
		buf[i] = '\0';
		i++;
	}
	i = 0;
	q = 0;
	while (i <= 100)
	{
		q = 0;
		while (q <= 200)
		{
			array_buf[i][q] = '\0';
			q++;
		}
		i++;
	}
//calloc реализация

	d_f = open("text.txt", O_RDONLY);			//инициализайия файлового дискриптера
	if (d_f == -1)								//проверка был ли открыт файл
	{
		write(1, &"error", 5);
		return (NULL);
	}

	ret = read(d_f, buf, BUF_SIZE);				//чтение файла из d_f в buf

	if (close(d_f) == -1)						//освобождение файлового дискриптера и проверка
	{											//был ли d_f освобожден 
		write(1, &"error", 5);
		return (NULL);
	}
												//printf("%d\n", ret); //отладка
	i = 0;
	q = 0;
	while (buf[i] != '\0')						//цикл по перезаписи даных из buf в array_buf
	{											//из одномерного масива в двумерный
		z = 0;
		while (buf[i] != '\n' )
		{
			array_buf[q][z] = buf[i];
//			write(1, &buf[i], 1);				//отладка
//			write(1, &array_buf[q][z], 1);		//отладка
			i++;
			z++;
		}
//		write(1, &"\n", 1);						//отладка
		i++;
		q++;
	}
	while(i <= BUF_SIZE)
	{
		free(&buf[i]);
		i++;
	}
}
/*
int main(){

    FILE *file;

    struct s_namber {
        char namber[200];
		char namber_name[200]; 
        unsigned qty; 
    };

    struct s_namber namber_name[200];
    char i = 0;
 
    file = fopen("text.txt", "r");
 
    while (fscanf(file, "%s%u%s", namber_name[i].namber_name, &(namber_name[i].qty), (namber_name[i].namber)) != EOF) 
	{ 
        printf("%s %u %s\n", namber_name[i].namber, namber_name[i].qty, namber_name[i].namber_name); 
        
		i++;
    }
}
*/
