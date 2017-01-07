/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 

#include <memory>
#include "IFile.hpp"
#include "ISocket.hpp"

class SocketAdapter : IFile {
public:
    SocketAdapter(std::shared_ptr<ISocket> socket);

    void read(void *buffer, size_t size) override;

    void write(const void *buffer, size_t size) override;

private:
    std::shared_ptr<ISocket> mSocket;
};
