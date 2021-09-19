#include "header.h"
#include "iostream"

// global_y needs to be defined somewhere, we
// define it in this source file
int global_y = 25;

header::header()
{

}

void print_global_x()
{
    // write global_x here
    std::cout << global_x << std::endl;
}
