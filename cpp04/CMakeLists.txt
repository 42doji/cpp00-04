cmake_minimum_required(VERSION 3.28)
project(cpp04)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00/includes)
include_directories(ex01/includes)
include_directories(ex02/includes)

add_executable(cpp04
        ex00/includes/Animal.hpp
        ex00/includes/Cat.hpp
        ex00/includes/Dog.hpp
        ex00/includes/WrongAnimal.hpp
        ex00/includes/WrongCat.hpp
        ex00/srcs/Animal.cpp
        ex00/srcs/Cat.cpp
        ex00/srcs/Dog.cpp
        ex00/srcs/main.cpp
        ex00/srcs/WrongAnimal.cpp
        ex00/srcs/WrongCat.cpp
        ex01/includes/Animal.hpp
        ex01/includes/Brain.hpp
        ex01/includes/Cat.hpp
        ex01/includes/Dog.hpp
        ex01/includes/WrongAnimal.hpp
        ex01/includes/WrongCat.hpp
        ex01/srcs/Animal.cpp
        ex01/srcs/Brain.cpp
        ex01/srcs/Cat.cpp
        ex01/srcs/Dog.cpp
        ex01/srcs/main.cpp
        ex01/srcs/WrongAnimal.cpp
        ex01/srcs/WrongCat.cpp
        ex02/includes/AAnimal.hpp
        ex02/includes/Brain.hpp
        ex02/includes/Cat.hpp
        ex02/includes/Dog.hpp
        ex02/includes/WrongAnimal.hpp
        ex02/includes/WrongCat.hpp
        ex02/srcs/AAnimal.cpp
        ex02/srcs/Brain.cpp
        ex02/srcs/Cat.cpp
        ex02/srcs/Dog.cpp
        ex02/srcs/main.cpp
        ex02/srcs/WrongAnimal.cpp
        ex02/srcs/WrongCat.cpp)
