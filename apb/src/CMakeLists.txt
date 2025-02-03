# Create a library for the APB source files
add_library(apb
    apb_agent.cpp
    apb_master.cpp
    apb_monitor.cpp
    apb_rw.cpp
    reg2apb_adapter.cpp
)

target_link_libraries(apb SystemC::systemc uvm-systemc)