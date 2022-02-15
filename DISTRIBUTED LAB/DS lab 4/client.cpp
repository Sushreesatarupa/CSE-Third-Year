#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
#define PORT 3001
#define SERVER_ADDRESS "192.168.0.130"
using namespace std;

int main(int argc,char const *argv[])
{
	int client_fd;
	struct sockaddr_in address;
	char buffer[BUFFER_SIZE]={0};
	if(argc<2)
	{
		cout<<"pass the message to be sent as argument"<<endl;
		exit(EXIT_FAILURE);
	} 
	client_fd=socket(AF_INET,SOCK_STREAM,0);
	if(client_fd<0){
		perror("opening socket failed");
		exit(EXIT_FAILURE);
	}
	
	address.sin_family=AF_INET;
	address.sin_port=htons(PORT);
	
	inet_pton(AF_INET,SERVER_ADDRESS,&address.sin_addr);
	
	if(connect(client_fd,(struct sockaddr *)&address,sizeof(address))<0){
		cout<<"connection failed"<<endl;
		return -1;
	}
	strcpy(buffer,argv[1]);
	buffer[strlen(argv[1])]='\0';
	send(client_fd,argv[1],strlen(argv[1]),0);
	cout<<"sent msg to server "<<SERVER_ADDRESS<<":"<<PORT<<endl;
	int cnt=read(client_fd,buffer,BUFFER_SIZE);
	cout<<"server replied :"<<buffer<<endl;
	return 0;
	
	
}
