#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>



void main()
{
char buf[200];
int n;
char *serv_ip="127.0.0.1";
int sockfd,ret_val;
struct sockaddr_in servaddr;
sockfd=socket(AF_INET,SOCK_STREAM,0);

bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(8000);
inet_pton(AF_INET,serv_ip,&servaddr.sin_addr);

ret_val=connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));

if(ret_val<0)
{
perror("connect:");
exit(1);
}
printf("enter the msg you want to send to server");
gets(buf);
//write(sockfd,buf,strlen(buf));
ssize_t sendto(sockfd,buf[],10000,0,(struct sockaddr *)&serlen)
n=read(sockfd,buf,200);
buf[n]='\0';
printf("rec %s from server \n",buf);
close(sockfd);
}
