project(ComponentB VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем собственные замисимости
include(dependences.cmake)

# Собираем файлы исходников (.h и .cpp) из текущей директории и всех поддиректорий (за счет GLOB_RECURSE)
#   возможно это не лучшее решение, но позволяет не прописывать все файлы вручную при добавлении.
#   (Для большого компонента будет очень длинный список)
file(GLOB_RECURSE SRC_LIST
        "*.h"
        "*.cpp")

# Добавляем наши исходники и интерфейсные файлы к проекту
add_library(ComponentB SHARED
    ${SRC_LIST}
    ${MY_INTERFACE})

target_link_libraries(ComponentB
    PRIVATE Qt${QT_VERSION_MAJOR}::Core
    ${MY_TARGET_LIBS})

target_compile_definitions(ComponentB
    PRIVATE COMPONENTB_LIBRARY)

target_include_directories(ComponentB
    PUBLIC ${MY_INCLUDE_PATH})

#Эти команды нужны для передачи набора конфигов вверх к корневому CMakeList.txt
file(GLOB COMPONENTB_CONFIG_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.xml")
set(MY_CONFIG_FILES
    "${MY_CONFIG_FILES};${COMPONENTB_CONFIG_FILES}" PARENT_SCOPE)
#
