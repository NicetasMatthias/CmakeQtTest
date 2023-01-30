cmake_minimum_required(VERSION 3.14)

project(ComponentA LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

set (MY_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/../include)
include_directories(${MY_INCLUDE_PATH})

include(dependences.cmake)

add_library(ComponentA SHARED
  ComponentA_global.h
  componenta.cpp
  componenta.h
  aobject.h
  aobject.cpp
  ${MY_INTERFACE}
)

include_directories(/usr/local/include)
#find_library(COMPONENTSCORE5ALPHA ComponentsCore5alpha HINTS /usr/local/lib64)

target_link_libraries(ComponentA PRIVATE Qt${QT_VERSION_MAJOR}::Core ${MY_TARGET_LIBS})

target_compile_definitions(ComponentA PRIVATE COMPONENTA_LIBRARY)
