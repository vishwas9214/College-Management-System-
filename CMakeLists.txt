cmake_minimum_required(VERSION 3.10)
project(CollegeManagementSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
set(SOURCES
    src/main.cpp
    src/Student.cpp
    src/Course.cpp
    src/Faculty.cpp
    src/Department.cpp
    src/Database.cpp
)

# Create executable
add_executable(college_management ${SOURCES})

# Include directories
target_include_directories(college_management PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
