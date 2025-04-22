#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>

struct sockaddr_in * sockadInit(char * host , int port){
  struct addrinfo *hint ,* addr;
  hint = malloc(sizeof(struct addrinfo));
  memset(hint,0,sizeof(struct addrinfo));

  hint ->ai_flags = 0;
  hint ->ai_family = AF_INET;
  hint ->ai_socktype =0;
  hint ->ai_protocol=0;
  getaddrinfo(host,NULL,hint ,&addr);

}
int main(int argc, char const *argv[]){
  
  return 0;
}
