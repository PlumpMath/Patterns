/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 

#include <string>
#include "IFile.hpp"

class UnixFile : public IFile {
public:
    UnixFile(const std::string &filepath);

    void read(void *buffer, size_t size) override;

    void write(const void *buffer, size_t size) override;

private:
    int mFileDesc;
};


