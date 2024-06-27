cmake_minimum_required(VERSION 3.5)
project(ClassHierarchy)

# Создаем список исходных файлов
set(SOURCES
    main.cpp
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

# Добавляем исполняемый файл с указанием исходных файлов и заголовочных файлов
add_executable(ClassHierarchy ${SOURCES} ${HEADERS})