/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   04 Jan 2017
*/

#pragma once 

#include <cstddef>

class IFile {
public:
    virtual void read(void *buffer, size_t size) = 0;

    virtual void write(const void *buffer, size_t size) = 0;
};