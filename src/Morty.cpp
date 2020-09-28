/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"
#include <fstream>
#include <iostream>
#include <string.h>

// =========================================================================== // 
//          Define functions enclosed in Namespace interdimensional here 
// =========================================================================== // 
namespace interdimensional {
    args parseArgs(int argc, char** argv) {
        args arguments;

        if (argc == 4) {
            arguments.start = atoi(argv[1]);
            arguments.stop = atoi(argv[2]);
            arguments.step = 1;

            if (strcmp(argv[3], "C137") == 0) {
                arguments.dim = C137;
            }
            else if (strcmp(argv[3], "Z286") == 0) {
                arguments.dim = Z286;
            }
            else {
                arguments.dim = UNKNOWN;
            }
        }
        if (argc == 5) {
            arguments.start = atoi(argv[1]);
            arguments.stop = atoi(argv[2]);
            arguments.step = atoi(argv[3]);

            if (strcmp(argv[4], "C137") == 0) {
                arguments.dim = C137;
            }
            else if (strcmp(argv[4], "Z286") == 0) {
                arguments.dim = Z286;
            }
            else {
                arguments.dim = UNKNOWN;
            }
        }

        return arguments;
    }
}

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
namespace C137{
    void Morty(int start, int stop, int step) {
        int i;

        std::cout << "Morty C137 says:" << std::endl;

        for (i = start; i <= stop; i += step) {
            std::cout << i << ": ";
            if (i % 15 == 0) {
                std::cout << "Aww Geez Man";
            }
            else if (i % 3 == 0) {
                std::cout << "Aww";
            }
            else if (i % 5 == 0) {
                std::cout << "Geez";
            }

            std::cout << std::endl;
        }
    }
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
namespace Z286 {
    void Morty(int start, int stop, int step) {
        int i;

        std::cout << "Morty Z286 says:\n";

        for (i = start; i <= stop; i += step) {
            std::cout << i << ": ";
            if (i % 15 == 0) {
                std::cout << "naM zeeG wwA";
            }
            else if (i % 3 == 0) {
                std::cout << "wwA";
            }
            else if (i % 5 == 0) {
                std::cout << "zeeG";
            }

            std::cout << std::endl;           
        }
    }
}