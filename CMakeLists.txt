cmake_minimum_required(VERSION 3.0.0)
project(redpig VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_DIR_LIST 
        "main.cpp" 
        "net/*.cpp"
        "net/poller/*.cpp"
        "base/*.cpp"       

)

# add the executable
add_executable(${PROJECT_NAME} ${SRC_DIR_LIST})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} pthread)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
