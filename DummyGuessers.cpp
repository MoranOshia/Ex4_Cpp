/**
 * Dummy Guessers class 
 *
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#include "DummyGuessers.hpp"
#include <stdlib.h>

std::string RandomGuesser::guess() {
	//random guess with no save pgia
	std::string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}
