cmake_minimum_required(VERSION 3.10)
project(racing_simulator)

add_subdirectory(vehicle)

# Указываем путь к заголовочным файлам
include_directories(vehicle)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Создаем исполняемый файл main
add_executable(racing_simulator main.cpp)

target_link_libraries(racing_simulator ground air vehicle)