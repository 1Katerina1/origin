cmake_minimum_required(VERSION 3.10)
project(racing_simulator)

# Создаем список исходных файлов
set(SOURCES
    air.cpp
    all_terrain_boots.cpp
    broom.cpp
    camel.cpp
    centaur.cpp
    eagle.cpp
    fast_camel.cpp
    ground.cpp
    magic_carpet.cpp
    vehicle.cpp
)

add_library(MyLibrary SHARED ${SOURCES})

# Добавляем путь для заголовочных файлов
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Создаем исполняемый файл main
add_executable(main main.cpp)

# Линкуем библиотеку с исполняемым файлом
target_link_libraries(main PRIVATE MyLibrary)