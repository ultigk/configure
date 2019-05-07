cmake_minimum_required(VERSION 3.8)

project(configure)

# Use C++11 standard for compiling
set(CMAKE_CXX_STANDARD 11)

# Find SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Choose dynamic or static linking of SFML
if(WIN32)
    option(SFML_STATIC_LIBRARIES "Build the executable with static linking" ON)
endif(WIN32)

# Bring source files in src/ directory into the project
set(SOURCE_FILES src/main.cpp src/window.cpp src/game.cpp src/particlesystem.cpp)

# Bring header files in include/ directory into the project
set(HEADER_FILES include/game.h include/particlesystem.h include/window.h )

# Add all sources to target
add_executable(configure ${SOURCE_FILES} ${HEADER_FILES})

# Add paths to includes
target_include_directories(configure PUBLIC include)

# Linking
target_link_libraries(configure sfml-graphics sfml-window sfml-system)