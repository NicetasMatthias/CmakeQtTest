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

add_library(ComponentA SHARED
  ComponentA_global.h
  componenta.cpp
  componenta.h
  aobject.h
  aobject.cpp
  ${PROJECT_SOURCE_DIR}/../include/ComponentA/IAObject.h
)

include_directories(/usr/local/include)
find_library(COMPONENTSCORE5ALPHA ComponentsCore5alpha HINTS /usr/local/lib64)
include_directories(${PROJECT_SOURCE_DIR}/../include)

target_link_libraries(ComponentA PRIVATE Qt${QT_VERSION_MAJOR}::Core ${COMPONENTSCORE5ALPHA})

target_compile_definitions(ComponentA PRIVATE COMPONENTA_LIBRARY)
