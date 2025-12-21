cmake_minimum_required(VERSION 3.27)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(<repo>
    LANGUAGES CXX
    VERSION 0.0.0.1
)
add_definitions(-DPROJECT_NAME="${PROJECT_NAME}")
add_definitions(-DPROJECT_VERSION="${PROJECT_VERSION}")
add_definitions(-DPROJECT_NAME_VERSION="${PROJECT_NAME} ${PROJECT_VERSION}")

find_package(spdlog REQUIRED)

include_directories(src/)

add_executable(main src/main.cpp)

target_link_libraries(main
    spdlog::spdlog
)
