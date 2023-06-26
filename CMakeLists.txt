cmake_minimum_required(VERSION 3.25)
project(4Gewinnt)

set(CMAKE_CXX_STANDARD 23)

add_executable(4Gewinnt main.cpp Field.cpp Field.hpp GuiField.cpp GuiField.hpp Human.hpp Human.cpp Player.cpp Generate.hpp Generate.cpp Game.cpp Game.hpp Application.cpp Application.hpp HorizontalBot.cpp ProBot.cpp RandomBot.cpp VerticalBot.cpp)
