cmake_minimum_required(VERSION 3.26)
project(MessageBus)

set(CMAKE_CXX_STANDARD 20)

add_executable(MessageBus main.cpp
        Models/Message.cpp
        Models/Message.h
        Models/MessageBus.cpp
        Models/MessageBus.h)
