#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <ctime>
#define BUFFER_SIZE 1024
#define PORT 3001

using namespace std;

int main(int argc,char const *argv[])
{
	struct sockaddr_in server_address,clientaddr;
	int server_fd,opt,addr_len=sizeof(server_address);
	char address[INET_ADDRSTRLEN+1]={0};
	char buffer[BUFFER_SIZE]={0};
	server_fd=socket(AF_INET,SOCK_DGRAM,0);
	if(server_fd<0){
		perror("opening socket failed");
		exit(EXIT_FAILURE);
	}
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=INADDR_ANY;
	server_address.sin_port=htons(PORT);
	if(bind(server_fd,(struct sockaddr *)&server_address,addr_len)<0){
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	
	cout<<"server started listening to PORT "<<PORT<<endl;
	while(true){
		int cnt=recvfrom(server_fd, buffer, BUFFER_SIZE, 0, (struct sockaddr *) &clientaddr, (socklen_t*)&addr_len);
		if(cnt==0)continue;
		if(cnt<0){
			perror("opening socket failed");
			exit(EXIT_FAILURE);
		}
		inet_ntop(AF_INET,&clientaddr.sin_addr,address,INET_ADDRSTRLEN);
		cout<<"received from "<<address<<" : "<<buffer<< endl;
		time_t curr_time= time(NULL);
		char *tm = ctime(&curr_time);
		sendto(server_fd, tm, strlen(tm), 0, (struct sockaddr*) &clientaddr, addr_len) ;
		cout<<"sent response to client"<<endl;
	}
	close (server_fd);
	return 0 ;
	
}
