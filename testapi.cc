#include <iostream>
#include "orthomesh.cc"
#include "omesh2d.h"
#include "gjk.h"


int main(int argc, char **argv) {
    // std::cout << "Hello, World!" << std::endl;   // just for testing
    
    auto & omesh2d_obj = orthomesh_main(argc, argv);
    std::cout << "omesh2d_obj: " << omesh2d_obj.grid.size() << std::endl;
    return 0;
}

