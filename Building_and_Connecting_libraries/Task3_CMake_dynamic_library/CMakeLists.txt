cmake_minimum_required(VERSION 3.10)
project(MyLeaver)
 
set(CMAKE_CXX_STANDARD 11)
 
# Создание динамической библиотеки
add_library(leaver SHARED leaver.cpp)
 
# Сборка основного приложения
add_executable(myleaver main.cpp)
 
# Линковка с созданной библиотекой
target_link_libraries(myleaver leaver)