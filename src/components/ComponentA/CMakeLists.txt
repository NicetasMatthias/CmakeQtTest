#Копируем конфиг в директорию сборки
file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/ComponentA.xml"
     DESTINATION ${MY_CONFIG_DESTINATION_PATH})

project(ComponentA VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(dependences.cmake)

add_library(ComponentA SHARED
  ComponentA_global.h
  componenta.cpp
  componenta.h
  aobject.h
  aobject.cpp
  ${MY_INTERFACE}
)

target_link_libraries(ComponentA PRIVATE Qt${QT_VERSION_MAJOR}::Core ${MY_TARGET_LIBS})

target_compile_definitions(ComponentA PRIVATE COMPONENTA_LIBRARY)


