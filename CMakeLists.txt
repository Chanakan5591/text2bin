cmake_minimum_required (VERSION 2.6
set(CMAKE_INSTALL_PREFIX /usr/local/bin)

project (text2bin)

add_executable(text2bin main.cpp binfunc.cpp)

install(TARGETS name1
    DESTINATION ${CMAKE_INSTALL_PREFIX}
    )

