cmake_minimum_required(VERSION 3.10)
project(Ping-pong)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE_FILES
  src/main.cpp
  src/window.cpp
  src/game.cpp
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(SDL2 REQUIRED)

add_executable(Ping-pong ${SOURCE_FILES})

target_link_libraries(Ping-pong SDL2::SDL2)
