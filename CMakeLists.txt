cmake_minimum_required(VERSION 3.20)
project(AGLauncher VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})

find_package(Qt5 COMPONENTS Core Gui Quick Widgets REQUIRED)
set(QT_LIBRARIES
    Qt5::Core
    Qt5::Gui
    Qt5::Quick
    Qt5::Widgets
)

include_directories(PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)

add_subdirectory(src)

# TODO: Move aglauncher executable and the required shared libraries (Qt etc.) to "bin"
install(TARGETS aglauncher DESTINATION ${CMAKE_BINARY_DIR})
install(DIRECTORY ${CMAKE_SOURCE_DIR}/share DESTINATION ${CMAKE_BINARY_DIR})
