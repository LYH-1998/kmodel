cmake_minimum_required(VERSION 3.24)
project(kmodel)

set(CMAKE_CXX_STANDARD 17)
include_directories("${PROJECT_SOURCE_DIR}")
add_executable(kmodel main.cpp EntityStatus.cpp  Utils.cpp ControlModel.cpp  Track.cpp  ChangeStatus.cpp Localization.cpp  Course.cpp) #EntityStatus.h Utils.h
