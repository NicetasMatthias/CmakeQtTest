add_subdirectory(ComponentA)
add_subdirectory(ComponentB)

# Эта команда нужна для передачи набора конфигов вверх к корневому CMakeList.txt
set(MY_CONFIG_FILES ${MY_CONFIG_FILES} PARENT_SCOPE)
