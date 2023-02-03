#Добавляем свои интерфейсные файлы к таргету
list (APPEND MY_INTERFACE
        ${MY_INCLUDE_PATH}/ComponentA/IAObject.h)

#Ищем QT
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

#Ищем ComponentsCore5alpha
find_package(ComponentsCore5alpha REQUIRED)

#Добавляем зависимости используемых модулей
include("${MY_COMPONENTS_PATH}/ComponentB/dependences.cmake")
