cmake_minimum_required(VERSION 3.5)

project(03_01_Frog_jump LANGUAGES C)

add_executable(03_01_Frog_jump main.c)

include(GNUInstallDirs)
target_link_libraries(${PROJECT_NAME} -lunity)
install(TARGETS 03_01_Frog_jump
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
