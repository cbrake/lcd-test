cmake_minimum_required(VERSION 3.5)
find_package(PkgConfig)
pkg_check_modules(LIBS REQUIRED gtk+-2.0)

include_directories(${LIBS_INCLUDE_DIRS})

add_executable(lcd-test main.c)
target_link_libraries(lcd-test ${LIBS_LIBRARIES})
install(TARGETS lcd-test DESTINATION bin)
install(DIRECTORY images/ DESTINATION share/lcd-test FILES_MATCHING PATTERN "*.png")




