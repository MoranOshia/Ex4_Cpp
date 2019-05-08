/**
 * SmartGuesser class never wrong
 *
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#include "SmartGuesser.hpp"
#include <string>
#include <math.h>
using std::string;
using namespace std;
using namespace bullpgia;




void SmartGuesser::startNewGame(uint length)
{
    combList.clear();//Resetting the list
    this->length=length;
    buildCombList(this->length);//Creates a list of all available options within the selected length range
}

string SmartGuesser::guess() 
{
    std::list<std::string>::iterator it = combList.begin();

    if (combList.size() == 1) 
    {
		 this->current = *combList.begin();//If the list size is 1 then this is the only guess and correct
    }
    else{
		
		std::advance(it, rand()%(combList.size()-1));//Randomly selected from the list
        this->current = *it; 
	}
    return current;

}

void SmartGuesser::learn(string result)
{
    list<string>::iterator it ;
    it=combList.begin();
    while (it != combList.end()) //Go over all the options from the list
    {
        string temp = calculateBullAndPgia(*it, current); //We will send the previous guess and the current option from the list
        if (temp.compare(result) != 0) 
        {
            it = combList.erase(it);//We will delete all options that have no chance
        }
        else 
        {
            it++;
        }
    }
    this->combList.remove(current);//We deleted the previous guess we sent
}

void SmartGuesser::buildCombList(uint length)
{
	string str="";
    int l = pow(10, length);//The number of options that can be within the given length range
    for (size_t i = 0; i < l; i++)

    {
		string iS=to_string(i);
		if(iS.length()<length){ //Add the "0" character to any option that is less than the selected length
			
			for(int u=0;u<length-iS.length();u++)
			{
				str="0"+str;
			}
			str=str+iS;
		}
		else{
			str=iS;
		}
        combList.push_front(str);
		str="";
    }
}



