#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd1;
	fd1=open("dumpdemo.txt",O_RDWR|O_CREAT|O_TRUNC,0660);
	if(fd1<0)
	{
		printf("Could not open the file");
		exit(2);
	}
	dup2(fd1,1);
	printf("Sample string 1\n");
	printf("Sample string 2\n");
	puts("Sample string 3\n");
}
