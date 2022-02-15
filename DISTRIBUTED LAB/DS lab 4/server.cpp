#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#define BUFFER_SIZE 1024
#define PORT 3001

using namespace std;

int main(int argc,char const *argv[])
{
	int server_fd,connection_fd,opt;
	struct sockaddr_in server_address,clientaddr;
	char address[INET_ADDRSTRLEN+1]={0};
	char buffer[BUFFER_SIZE]={0};
	server_fd=socket(AF_INET,SOCK_STREAM,0);
	if(server_fd<0){
		perror("opening socket failed");
		exit(EXIT_FAILURE);
	}
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=INADDR_ANY;
	server_address.sin_port=htons(PORT);
	if(bind(server_fd,(struct sockaddr *)&server_address,sizeof(server_address))<0){
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	listen(server_fd,5);
	
	cout<<"server started listening to PORT "<<PORT<<endl;
	while(true){
		connection_fd=accept(server_fd,(struct sockaddr *) &clientaddr,(socklen_t *)&clientaddr);
		inet_ntop(AF_INET,&clientaddr.sin_addr,address,INET_ADDRSTRLEN);
		int cnt=read(connection_fd,buffer,BUFFER_SIZE);
		cout<<"received from "<<address<<" : "<<buffer<< endl;
		send(connection_fd,buffer,cnt,0);
		cout<<"sent response to client"<<endl;
		close(connection_fd);
	}
	
	
}
