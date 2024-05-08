#include <iostream>
#include "orthomesh.cc"
#include "omesh2d.h"
#include "gjk.h"


int main(int argc, char **argv) {
    // std::cout << "Hello, World!" << std::endl;   // just for testing
    
    auto omesh2d_obj = orthomesh_main(argc, argv);
    std::cout << "omesh2d_obj: " << omesh2d_obj.grid.size() << std::endl;
 
    // // ********** Calculate the intersection points between the 'lines' and mesh grids **********
    // // loop over each grid and check if the lines intersect with the grid by using GJK algorithm
    // // if the lines intersect with the grid, then calculate the intersection points
    // // if the intersection points are found, then store the intersection points in the 'intersection_points' vector.
    // bool is_intersected_x = false;
    // bool is_intersected_y = false;
    // std::vector<std::vector<double>> intersection_points;
    // for (auto & coord : omesh2d_obj.grid) {
    //     for (auto & line : omesh2d_obj.geometries) {
    //         is_intersected_x = false;
    //         is_intersected_y = false;
    //         omesh2d_obj.refine(coord.first.major_x, coord.first.major_y, coord.first.minor_x, coord.first.minor_y,
    //             coord.first.size, coord.first.size, is_intersected_x, is_intersected_y);
    //         if (is_intersected_x || is_intersected_y) {
    //             // std::vector<double> intersection_point = Omesh2d_GJK::get_intersection_point(line, coord);
    //             // intersection_points.push_back(intersection_point);
    //         }
    //     }
    // }



    return 0;
}

