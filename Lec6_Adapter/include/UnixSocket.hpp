/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 


#include "ISocket.hpp"

class UnixSocket : public ISocket {
public:
    UnixSocket();

    void connect(const std::string &ip, unsigned short port) override;

    void receive(void *buffer, size_t size) override;

    void send(const void *buffer, size_t size) override;

private:
    int mSock;
};


