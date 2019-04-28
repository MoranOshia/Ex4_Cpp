/**
 * Header file for the DummyChooser class. 
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#pragma once
#include "Chooser.hpp"
using std::string;

/**
 * ConstantChooser is a chooser that always chooses the same string. 
 */
class ConstantChooser: public bullpgia::Chooser {
		string myConstantString;
	public:
		ConstantChooser(const string& constantString) { myConstantString = constantString; }
		string choose(uint length) override {
			return myConstantString;
		}
};

/**
 * RandomChooser is a chooser that chooses a random string.
 */
class RandomChooser: public bullpgia::Chooser {
		string choose(uint length) override;
};


