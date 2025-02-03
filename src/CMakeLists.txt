# Add main.cpp to the build process
add_executable(apb_testbench
    sc_main.cpp  # Ensure this is included
)

# Link the SystemC library and other dependencies
target_link_libraries(apb_testbench
    SystemC::systemc
    uvm-systemc
    apb
)