set(libmatrix_SRCS
    dimension.h
    dimension.cpp
    operators.h
    operators.cpp
    matrix.h
    matrix.cpp
)

# Declare the library
add_library(libmatrix STATIC
    ${libmatrix_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(libmatrix PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
