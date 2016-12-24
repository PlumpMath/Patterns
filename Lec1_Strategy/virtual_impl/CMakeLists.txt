project(Strategy)

add_definitions(-std=c++11)

file(GLOB_RECURSE HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(strategy strategy.cpp ${HEADERS} ${SOURCES})
target_include_directories(strategy PRIVATE include)