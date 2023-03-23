#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("process pid =%d\n",getpid());
	printf("my parent pid=%d\n",getppid());
	printf("Linux Kernel\n");
	while(1);
	return 0;
}
