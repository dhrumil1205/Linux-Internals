#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,fd3;
	fd1= creat("File1.txt",777);
	fd2= creat("File2.txt",777);
	fd3= creat("File3.txt",777);

	printf("fd for file1:%d\n",fd1);

	printf("fd for file2:%d\n",fd2);

	printf("fd for file3:%d\n",fd3);
	close(fd1);
	close(fd2);
	close(fd3);
}
