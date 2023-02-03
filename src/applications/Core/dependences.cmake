#Ищем QT
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

#Ищем ComponentsCore5alpha
find_package(ComponentsCore5alpha REQUIRED)

#Добавляем зависимости используемых модулей
include("${MY_COMPONENTS_PATH}/ComponentA/dependences.cmake")
