cmake_minimum_required(VERSION 3.10)
project(ClassHierarchy)

# Создаем список исходных файлов
set(SOURCES
    equilateralTriangle.cpp
    figure.cpp
    isoscelesTriangle.cpp
    parallelogram.cpp
    quadrangle.cpp
    rectangle.cpp
    rhombus.cpp
    rightTriangle.cpp
    square.cpp
    triangle.cpp
)

# Создаем список заголовочных файлов
set(HEADERS
    equilateralTriangle.h
    figure.h
    isoscelesTriangle.h
    parallelogram.h
    quadrangle.h
    rectangle.h
    rhombus.h
    rightTriangle.h
    square.h
    triangle.h
)

add_library(MyLibrary SHARED ${SOURCES})

# Добавляем путь для заголовочных файлов
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Создаем исполняемый файл main
add_executable(main main.cpp)

# Линкуем библиотеку с исполняемым файлом
target_link_libraries(main PRIVATE MyLibrary)