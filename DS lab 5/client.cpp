#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <chrono>
#include <unistd.h>
#define BUFFER_SIZE 1024
#define PORT 3001
#define SERVER_ADDRESS "192.168.0.130"
using namespace std;
// Get time stamp in milliseconds.


// Get time stamp in microseconds.
uint64_t micros()
{
    uint64_t us = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::
                  now().time_since_epoch()).count();
    return us; 
}
int main(int argc,char const *argv[])
{
	struct sockaddr_in address;
	int client_fd,addr_len=sizeof(address);
	char buffer[BUFFER_SIZE]={0};
	if(argc<2)
	{
		cout<<"pass the message to be sent as argument"<<endl;
		exit(EXIT_FAILURE);
	} 
	client_fd=socket(AF_INET,SOCK_DGRAM,0);
	if(client_fd<0){
		perror("opening socket failed");
		exit(EXIT_FAILURE);
	}
	
	address.sin_family=AF_INET;
	address.sin_port=htons(PORT);
	
	inet_pton(AF_INET,SERVER_ADDRESS,&address.sin_addr);

	strcpy(buffer,argv[1]);
	buffer[strlen(argv[1])]='\0';
	
	uint64_t now=micros();
	sendto(client_fd, buffer, strlen(buffer) , 0 , (struct sockaddr *) &address, addr_len);
	cout<<"sent msg to server "<<SERVER_ADDRESS<<":"<<PORT<<endl;
	recvfrom(client_fd, buffer, BUFFER_SIZE, 0, (struct sockaddr *) &address, (socklen_t*)&addr_len);
	now=micros()-now;
	cout<<"server replied <ping="<<now<<"us>:"<<buffer<<endl;
	close(client_fd);
	return 0;
	
	
}
