cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)
project(CentalComm)
add_executable(${PROJECT_NAME}
    main.cpp
    CentralComm.cpp
    CentralComm.h
    Date.h)
