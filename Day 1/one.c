#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,fd3;
	for(int i=0;i<=1023;i++)
	{	
	fd1 = open("File.txt",O_WRONLY,777);
	printf("fd returned by kernel for File.txt =%d\n",fd1);
	}
	close(fd1);
	
		
}
