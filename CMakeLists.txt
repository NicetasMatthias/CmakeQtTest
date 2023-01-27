cmake_minimum_required(VERSION 3.5)

project(cmakeQtTest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        MainWindow.cpp
        MainWindow.h
        MainWindow.ui
)

include_directories(/usr/local/include)
find_library(COMPONENTSCORE5ALPHA ComponentsCore5alpha HINTS /usr/local/lib64)
include_directories(${PROJECT_SOURCE_DIR}/components/include)

set(COMPONENTA
        ${PROJECT_SOURCE_DIR}/components/include/ComponentA/IAObject.h)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(cmakeQtTest
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${COMPONENTA}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET cmakeQtTest APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(cmakeQtTest SHARED
            ${PROJECT_SOURCES}
            ${COMPONENTA}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(cmakeQtTest
            ${PROJECT_SOURCES}
            ${COMPONENTA}
        )
    endif()
endif()

target_link_libraries(cmakeQtTest PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${COMPONENTSCORE5ALPHA})

set_target_properties(cmakeQtTest PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS cmakeQtTest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(cmakeQtTest)
endif()
