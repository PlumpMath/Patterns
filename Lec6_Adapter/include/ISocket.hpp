/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 

#include <string>

class ISocket {
public:
    virtual void connect(const std::string &ip, unsigned short port) = 0;

    virtual void receive(void *buffer, size_t size) = 0;

    virtual void send(const void *buffer, size_t size) = 0;
};


