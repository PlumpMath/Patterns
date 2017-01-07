/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#include "UnixFile.hpp"

#include <fcntl.h>
#include <unistd.h>
#include <iostream>

UnixFile::UnixFile(const std::string &filepath) :
        mFileDesc(/*::open(filepath.c_str(), O_RDONLY)*/) { }

void UnixFile::read(void *buffer, size_t size) {
    std::cout << "read from file" << std::endl;
//    ::read(mFileDesc, buffer, size);
}

void UnixFile::write(const void *buffer, size_t size) {
    std::cout << "write to file" << std::endl;
//    ::write(mFileDesc, buffer, size);
}
