#Добавляем свои интерфейсные файлы к таргету
list (APPEND MY_INTERFACE
        ${MY_INCLUDE_PATH}/ComponentB/IWord.h
        ${MY_INCLUDE_PATH}/ComponentB/IBObject.h)

#Ищем QT
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

#Ищем ComponentsCore5alpha
find_package(ComponentsCore5alpha REQUIRED)

