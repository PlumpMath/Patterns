project(Command)

add_definitions(-std=c++11)

include_directories(include)

file(GLOB_RECURSE HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(command command.cpp ${HEADERS} ${SOURCES})