/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <string.h>


int main(int argc, char** argv) {

	//Error statement to make sure program arguments are called correctly.
	if (argc != 4 and argc != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	//will only parse the arguments if there if argc == (4 || 5)
	interdimensional::args a = interdimensional::parseArgs(argc, argv);

	//Debug statement to check correctly parsed arguments
	/*std::cout << "Printing parsed arguments from main: \nStart: " << a.start << "\nStop: " << a.stop << "\nStep: " << a.step
		<< "\nDimension: " << a.dim << std::endl;*/

	//If Dimension is C137
	if (a.dim == 0) {
		C137::Morty(a.start, a.stop, a.step);
	}
	//If Dimension is Z286
	else if (a.dim == 1) {
		Z286::Morty(a.start, a.stop, a.step);
	}
	//If Dimension is unknown
	else {
		if (argc == 4) {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
		}
		else if (argc == 5) {
			std::cout << "ERROR: Unknown Dimension!!" << std::endl;
		}
	}
	return 0;
}