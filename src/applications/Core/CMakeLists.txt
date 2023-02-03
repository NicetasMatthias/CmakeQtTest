project(Core VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем собственные замисимости
include(dependences.cmake)

#Собираем файлы исходников (.h, .cpp и .ui) из текущей директории и всех поддиректорий (за счет GLOB_RECURSE)
#   возможно это не лучшее решение, но позволяет не прописывать все файлы вручную при добавлении.
#   (Для большого компонента будет очень длинный список)
file(GLOB_RECURSE SRC_LIST
        "*.h"
        "*.cpp"
        "*.ui")

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Core
        MANUAL_FINALIZATION
        ${SRC_LIST}
        ${MY_INTERFACE}
    )

# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Core APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Core SHARED
            ${SRC_LIST}
            ${MY_INTERFACE}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Core
            ${SRC_LIST}
            ${MY_INTERFACE}
        )
    endif()
endif()

target_link_libraries(Core
    PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
    ${MY_TARGET_LIBS})

target_include_directories(Core
    PUBLIC ${MY_INCLUDE_PATH})

set_target_properties(Core PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Core
    RUNTIME DESTINATION bin
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Core)
endif()

#Эти команды нужны для передачи набора конфигов вверх к корневому CMakeList.txt
file(GLOB COMPONENTB_CONFIG_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.xml")
set(MY_CONFIG_FILES
    "${MY_CONFIG_FILES};${COMPONENTB_CONFIG_FILES}" PARENT_SCOPE)
#
