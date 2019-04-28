/**
 * Dummy Choosers class 
 *
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#include "DummyChoosers.hpp"
#include <stdlib.h>

std::string RandomChooser::choose(uint length) {
	//random chooser select random numbers
	std::string r="";
	for (uint i=0; i<length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}
