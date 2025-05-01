cmake_minimum_required(VERSION 3.30)
project(practica_sfml)

set(CMAKE_CXX_STANDARD 20)

# Rutas para SFML 2.5.1 instalada como 'keg-only'
set(SFML_DIR "/usr/local/opt/sfml@2/lib/cmake/SFML")
include_directories("/usr/local/opt/sfml@2/include")
link_directories("/usr/local/opt/sfml@2/lib")

# Encuentra SFML y enlaza los módulos
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(practica_sfml
        main.cpp
        Ray.cpp
        Ray.h)

target_link_libraries(practica_sfml sfml-graphics sfml-window sfml-system)
