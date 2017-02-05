cmake_minimum_required(VERSION 3.6)
project(proj_5b)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BankAccount.cpp BankAccount.hpp)
add_executable(proj_5b ${SOURCE_FILES})