cmake_minimum_required(VERSION 3.26)
project(algoGeo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(algoGeo main.cpp
        Sommet.cpp
        Sommet.h
        Polygon.cpp
        Polygon.h
        MainWindow.cpp
        MainWindow.h
        Point.cpp
        Point.h)
target_link_libraries(algoGeo
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)

