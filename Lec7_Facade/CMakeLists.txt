project(Facade)

add_definitions(-std=c++11)

include_directories(include)

file(GLOB_RECURSE HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(facade facade.cpp ${HEADERS} ${SOURCES})