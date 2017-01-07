/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include <array>
#include <ISocket.hpp>
#include <UnixFile.hpp>
#include <UnixSocket.hpp>
#include <SocketAdapter.hpp>

int main()
{
    std::shared_ptr<IFile> file = std::make_shared<UnixFile>("test.txt");
    std::shared_ptr<ISocket> socket = std::make_shared<UnixSocket>();

    auto socket_adapter = std::make_shared<SocketAdapter>(socket);

    std::array<char, 1024> buffer;

    file->read(buffer.data(), buffer.size());
    socket_adapter->read(buffer.data(), buffer.size());

    return 0;
}