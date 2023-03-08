cmake_minimum_required(VERSION 3.24)
project(kmodel)

set(CMAKE_CXX_STANDARD 17)

include_directories("${PROJECT_SOURCE_DIR}"
)

SET(Headers
        EntityStatus.h Course.h
        Localization.h Track.h
        Utils.h ControlModel.h
        ChangeStatus.h
)

SET(Sources
        main.cpp EntityStatus.cpp
        Utils.cpp ControlModel.cpp
        Track.cpp  ChangeStatus.cpp
        Localization.cpp  Course.cpp
)
enable_testing()

add_subdirectory(googletest)

add_executable(${PROJECT_NAME} ${Sources} ${Headers})

add_subdirectory(test)

