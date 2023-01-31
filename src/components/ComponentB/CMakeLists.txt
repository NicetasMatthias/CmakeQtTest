#Копируем конфиг в директорию сборки
file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/ComponentB.xml"
     DESTINATION ${MY_CONFIG_DESTINATION_PATH})

project(ComponentB LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(dependences.cmake)

set(SRC_LIST
        ComponentB_global.h
        componentb.cpp
        componentb.h
        bobject.h
        bobject.cpp
        objects/wordhello.h
        objects/wordhello.cpp
        objects/wordworld.h
        objects/wordworld.cpp
        ${MY_INTERFACE} )


add_library(ComponentB SHARED ${SRC_LIST})

target_link_libraries(ComponentB PRIVATE Qt${QT_VERSION_MAJOR}::Core ${MY_TARGET_LIBS})

target_compile_definitions(ComponentB PRIVATE COMPONENTB_LIBRARY)
