cmake_minimum_required(VERSION 3.24)

project(basic_cmake_project)

add_executable(${PROJECT_NAME} main.cpp)
# Find package celeneos:
find_package(celeneos 0.1.0 CONFIG REQUIRED) #project-version
# Use celeneos release shared target:
target_link_libraries(${PROJECT_NAME} PRIVATE celeneos)
# Use celeneos release static target:
#target_link_libraries(${PROJECT_NAME} PRIVATE celeneos-static)

