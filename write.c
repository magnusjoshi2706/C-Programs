#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2,fd3;
fd1=open("linux1.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
fd2=open("linux2.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
printf("fd1=%d\n",fd1);
printf("fd2=%d\n",fd2);
fd3=dup(fd1);
printf("fd3_dup of fd1=%d\n",fd3);
printf("fd1_dup of fd1=%d\n",fd1);
close(fd1);
close(fd2);
close(fd3);
}


