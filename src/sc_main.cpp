#include <systemc>
#include <uvm>
//#include "apb_agent.h"  // Include the header for your APB agent

// Define the top-level module (sc_module)
SC_MODULE(top) {
public:
    // Declare the APB agent as a module within the top-level module
    //apb_agent* apb_agent_inst;

    // Constructor for the top-level module
    SC_CTOR(top) {
        // Create an instance of the apb_agent
        //apb_agent_inst = new apb_agent("apb_agent_inst");

        // Additional setup (e.g., binding signals) can be done here if needed
    }

    // Destructor to clean up dynamically allocated memory
    ~top() {
        //delete apb_agent_inst;
    }
};

// The main simulation function
int sc_main(int argc, char* argv[]) {
    // Create the top-level module
    top top_inst("top_inst");

    // Start the simulation
    sc_core::sc_start();

    std::cout << "Finish!" << std::endl;

    return 0;
}
