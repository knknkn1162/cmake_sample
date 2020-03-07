add_executable(a.out main.cpp)

# target_compile_options(a.out PUBLIC -O2 -Wall)
# target_compile_features(a.out PUBLIC cxx_std_14)
# target_compile_definitions(a.out PUBLIC NDEBUG _USE_MATH_DEFINES)

target_compile_options(a.out PUBLIC
    $<$<CONFIG:Release>:-O3>
    $<$<CONFIG:Debug>:-O0 -g>
    $<$<CONFIG:RelWithDebgInfo>:-O3 -g>
)

target_compile_definitions(a.out PUBLIC
    $<$<NOT:$<CONFIG:Debug>>:NDEBUG>
)

target_link_libraries(a.out PUBLIC greetings m)
