/**
 * Header file for the Chooser class. 
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#pragma once
// #include "calculate.hpp"
#include <string>

namespace bullpgia {



class Chooser 
{
    
     std::string s;
    public:
   
	Chooser(){}
	virtual std::string choose(uint length){
    std::string r = "";
    return r;
	}

};
}
