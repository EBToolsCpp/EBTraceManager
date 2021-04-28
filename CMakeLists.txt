cmake_minimum_required(VERSION 3.0)
project(EBTrace)
aux_source_directory(. SRC_FILE_LIST)
add_executable(${PROJECT_NAME} ${SRC_FILE_LIST})