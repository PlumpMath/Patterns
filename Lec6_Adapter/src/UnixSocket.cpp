/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include "UnixSocket.hpp"

UnixSocket::UnixSocket() :
        mSock(/*socket(AF_INET, SOCK_STREAM, 0)*/) { }

void UnixSocket::connect(const std::string &ip, unsigned short port) {
//    sockaddr_in addr;
//    bzero(&addr, sizeof(addr));
//    addr.sin_family = AF_INET;
//    addr.sin_addr.s_addr = inet_addr(ip.c_str());
//    addr.sin_port = htons(port);
//    ::connect(mSock, static_cast<sockaddr*>(&addr), sizeof(addr));
}

void UnixSocket::receive(void *buffer, size_t size) {
    std::cout << "receive from server" << std::endl;
//    ::recv(mSock, buffer, size, 0);
}

void UnixSocket::send(const void *buffer, size_t size) {
    std::cout << "send to server" << std::endl;
//    ::send(mSock, buffer, size, 0);
}
