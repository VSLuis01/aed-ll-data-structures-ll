cmake_minimum_required(VERSION 3.22)
project(Trabalho_AEDll C)

set(CMAKE_C_STANDARD 23)

add_executable(Trabalho_AEDll main.c structures/SimpleLinkedList.c structures/SimpleLinkedList.h structures/CircularLinkedList.c structures/CircularLinkedList.h)
