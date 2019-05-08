/**
 * Header file for the SmartGuesser class. 
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#pragma once
#include "calculate.hpp"
#include "Guesser.hpp"
#include <list>

namespace bullpgia
{

class SmartGuesser : public bullpgia::Guesser
{


  public:
  list<std::string> combList;
  std::string current;
  string guess() override;
  void learn(string result)override;
  void startNewGame(uint length)override;
  void buildCombList(uint length);
  
};



} 
