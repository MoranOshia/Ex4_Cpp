/**
 * Header file for the Guesser class. 
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#pragma once
#include <string>
#include "calculate.hpp"

namespace bullpgia {
class Guesser 
{
    std::string s;
    
    public:
    uint length;
    Guesser(){}
    virtual std::string guess(){
            std::string r = "";
    return r;
    }
    virtual void startNewGame(uint length){}
    virtual std::string learn(std::string reply){
            std::string r = "";
    return r;
    }
};
}
