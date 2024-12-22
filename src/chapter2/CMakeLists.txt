add_executable(compound_types src/compound_types.cpp)
add_executable(const_qualifier src/const_qualifier.cpp)
add_executable(header_file src/header_file.cpp)

# Specify include directories for the target header_file
target_include_directories(header_file
    PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)