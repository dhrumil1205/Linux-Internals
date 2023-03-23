#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Max fds : %d\n",getdtablesize());
	exit(0);
}
