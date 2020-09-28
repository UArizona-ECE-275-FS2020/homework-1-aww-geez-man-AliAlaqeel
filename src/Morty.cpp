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

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137 {
	void Morty(int start, int stop, int step) {
		int i = start;
		do {
			std::cout << '\n' << i << ": ";
			if (i % 15 == 0) std::cout << "Aww Geez Man";
			else if (i % 5 == 0) std::cout << "Geez";
			else if (i % 3 == 0) std::cout << "Aww";
			i = i + step;
		} while (i <= stop);
	}
	void Morty(int start, int stop) {
		int i = start;
		do {
			std::cout << '\n' << i << ": ";
			if (i % 15 == 0) std::cout << "Aww Geez Man";
			else if (i % 5 == 0) std::cout << "Geez";
			else if (i % 3 == 0) std::cout << "Aww";
			i = i + 1;
		} while (i <= stop);
	}
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

namespace Z286 {
	void Morty(int start, int stop, int step) {
		int i = start;
		do {
			std::cout << '\n' << i << ": ";
			if (i % 15 == 0) std::cout << "naM zeeG wwA";
			else if (i % 5 == 0) std::cout << "zeeG";
			else if (i % 3 == 0) std::cout << "wwA";
			i = i + step;
		} while (i <= stop);
	}
	void Morty(int start, int stop) {
		int i = start;
		do {
			std::cout << '\n' << i << ": ";
			if (i % 15 == 0) std::cout << "naM zeeG wwA";
			else if (i % 5 == 0) std::cout << "zeeG";
			else if (i % 3 == 0) std::cout << "wwA";
			i = i + 1;
		} while (i <= stop);
	}
}