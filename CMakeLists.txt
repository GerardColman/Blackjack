cmake_minimum_required(VERSION 3.17)
project(Blackjack)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(Blackjack main.cpp deck.cpp include/deck.h card.cpp include/card.h player.cpp include/player.h)