include_directories(../include)
add_library(ipb_aritmethic subtract.cpp sum.cpp)
add_executable(main main.cpp)
target_link_libraries(main ipb_aritmethic)

install(TARGETS ipb_aritmethic DESTINATION lib)