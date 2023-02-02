#Минимальная версия CMake (поставил наугад)
cmake_minimum_required(VERSION 3.0)

project(cmakeTest VERSION 0.1 LANGUAGES CXX)
set (MY_INCLUDE_PATH "${CMAKE_SOURCE_DIR}/src/include")
set (MY_COMPONENTS_PATH "${CMAKE_SOURCE_DIR}/src/components")
include_directories("${MY_INCLUDE_PATH}")

#задаем переменную содержащую путь для копирования конфигов
set (MY_CONFIG_DESTINATION_PATH "${cmakeTest_BINARY_DIR}/build/configs")


#переменная ${cmakeTest_BINARY_DIR} содержит путь до директории сборки и
#устанавливается автоматически при вызове project(cmakeTest ...)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${cmakeTest_BINARY_DIR}/build/applications")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${cmakeTest_BINARY_DIR}/build/components")

#создаю директориии для компонентов и конфигов которые читает приложение (чтобы не создавать их руками)
make_directory("${cmakeTest_BINARY_DIR}/build/applications/components")
make_directory("${cmakeTest_BINARY_DIR}/build/applications/configs")

list(APPEND CMAKE_MODULE_PATH "${cmakeTest_SOURCE_DIR}/cmake")

#set(${MY_CONFIG_FILES} "")

add_subdirectory(src)

message("WRONG!!!!!!!!!!!!")
message("${MY_CONFIG_FILES}")


file(COPY ${MY_CONFIG_FILES}
     DESTINATION ${MY_CONFIG_DESTINATION_PATH})

#есть возможность на этапе сборки сделать симлинки
#на библиотеки компонентов и скопировать конфиги
#(возможно на основе пресета, функционал есть, надо только с ним разобраться)
