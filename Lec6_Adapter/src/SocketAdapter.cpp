/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include "SocketAdapter.hpp"

SocketAdapter::SocketAdapter(std::shared_ptr<ISocket> socket)
        : mSocket(socket) { }

void SocketAdapter::read(void *buffer, size_t size) {
    mSocket->receive(buffer, size);
}

void SocketAdapter::write(const void *buffer, size_t size) {
    mSocket->send(buffer, size);
}
