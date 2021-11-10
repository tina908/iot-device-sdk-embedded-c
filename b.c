#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)



char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void){
	int fd;
	if ((fd = open("file.hole", FILE_MODE))<0)
		printf("creat error");
	if (write(fd, buf1, 10) != 10)
		printf("bufl write error");
	if (lseek(fd, 16384, SEEK_SET)== -1)
		printf("lseek error");
	if(write(fd,buf2, 10)!=10)
		printf("buf2 write error");
	exit(0);
}
