project(ComponentA VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#Включаем собственные замисимости
include(dependences.cmake)

#Собираем файлы исходников (.h и .cpp) из текущей директории и всех поддиректорий (за счет GLOB_RECURSE)
file(GLOB_RECURSE SRC_LIST
        "*.h"
        "*.cpp")

#Добавляем наши исходники и интерфейсные файлы к проекту
add_library(ComponentA SHARED
    ${SRC_LIST}
    ${MY_INTERFACE})

target_link_libraries(ComponentA PRIVATE Qt${QT_VERSION_MAJOR}::Core ${MY_TARGET_LIBS})

target_compile_definitions(ComponentA PRIVATE COMPONENTA_LIBRARY)

#Эти команды нужны для передачи набора конфигов вверх к корневому CMakeList.txt
file(GLOB COMPONENTA_CONFIG_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.xml")
set(MY_CONFIG_FILES "${MY_CONFIG_FILES};${COMPONENTA_CONFIG_FILES}" PARENT_SCOPE)
#

