#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	struct stat st;
	int fd;
	fd = open("pro3.c",O_RDONLY);
	fstat(fd,&st);
	//stat("pro3.c",&st);
	printf("File size =%lu\n",(st.st_size));
	printf("File gid =%lu\n",(st.st_gid));
	printf("File uid =%lu\n",(st.st_uid));
	printf("File inode =%lu\n",st.st_ino);
	printf("Size disc of blocks =%lu\n",st.st_blksize);
	printf("\n");
	close(fd);
	return 0;
}
