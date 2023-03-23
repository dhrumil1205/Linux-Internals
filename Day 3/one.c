#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd = open("file.txt",O_WRONLY|O_CREAT,0777);
	printf("%d\n",fd);
	while(1)
	{

	}
}
