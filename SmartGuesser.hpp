/**
 * Header file for the SmartGuesser class. 
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#pragma once
#include "Guesser.hpp"
using std::string;

class SmartGuesser: public bullpgia::Guesser {
		string mySmartString;
	public:
        uint length;
        SmartGuesser(){}
		SmartGuesser(const string& smartString) { mySmartString = smartString; }
		std::string guess() override ;
	  
        void  startNewGame(uint length)override;
    
    std::string learn(std::string reply)override;
};