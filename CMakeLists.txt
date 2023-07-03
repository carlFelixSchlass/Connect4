cmake_minimum_required(VERSION 3.25)
project(4Gewinnt)

set(CMAKE_CXX_STANDARD 23)

add_executable(4Gewinnt src/main.cpp src/Field.cpp src/Field.hpp src/GuiField.cpp src/GuiField.hpp src/Human.hpp src/Human.cpp src/Player.cpp src/Generate.hpp src/Generate.cpp src/Game.cpp src/Game.hpp src/Application.cpp src/Application.hpp src/HorizontalBot.cpp src/ProBot.cpp src/RandomBot.cpp src/VerticalBot.cpp)
