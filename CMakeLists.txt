cmake_minimum_required(VERSION 3.10)
project(SPI-APB_Verification_Project)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find SystemC package
find_package(SystemCLanguage REQUIRED)

# UVM-SystemC setup
set(UVM_SYSTEMC_HOME /usr/local/uvm-systemc)
set(UVM_SYSTEMC_INCLUDE_DIR ${UVM_SYSTEMC_HOME}/include)
set(UVM_SYSTEMC_LIBRARY_DIR ${UVM_SYSTEMC_HOME}/lib)

# Specify the include directories
include_directories(
    ${UVM_SYSTEMC_INCLUDE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/apb/inc
)
link_directories(
    ${UVM_SYSTEMC_LIBRARY_DIR}
)

# Add subdirectories for source code
add_subdirectory(apb/src)
add_subdirectory(src)
