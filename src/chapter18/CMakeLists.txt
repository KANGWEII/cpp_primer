add_executable(stack_unwinding src/stack_unwinding.cpp)
add_executable(rethrow src/rethrow.cpp)
add_executable(namespaces src/namespaces.cpp)
add_executable(multiple_inheritance src/multiple_inheritance.cpp)

# Specify include directories for the target multiple_inheritance
target_include_directories(multiple_inheritance
    PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)