#Добавляем свои интерфейсные файлы к таргету
list (APPEND MY_INTERFACE ${MY_INCLUDE_PATH}/ComponentA/IAObject.h)

#Устанавливаем путь поиска инклудов библиотек
include_directories(/usr/local/include)

#Ищем необходимую библиотеку и в случае успеха добавляем ее в переменную
find_library(COMPONENTSCORE5ALPHA ComponentsCore5alpha HINTS /usr/local/lib64)
if(NOT COMPONENTSCORE5ALPHA)
  message(ERROR "COMPONENTSCORE5ALPHA has not been found")
  return()
else()
    list (APPEND MY_TARGET_LIBS ${COMPONENTSCORE5ALPHA})
endif()


