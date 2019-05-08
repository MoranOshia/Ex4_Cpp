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
    combList.clear();
    this->length=length;
    buildCombList(this->length);
}

string SmartGuesser::guess() 
{
    std::list<std::string>::iterator it = combList.begin();

    if (combList.size() == 1) 
    {
		 this->current = *combList.begin();
    }
    else{
		
		std::advance(it, rand()%(combList.size()-1));
        this->current = *it; 
	}
    return current;

}

void SmartGuesser::learn(string result)
{
    list<string>::iterator it ;
    it=combList.begin();
    while (it != combList.end()) 
    {
        string temp = calculateBullAndPgia(*it, current); 
        if (temp.compare(result) != 0) 
        {
            it = combList.erase(it);
        }
        else 
        {
            it++;
        }
    }
    this->combList.remove(current);
}

void SmartGuesser::buildCombList(uint length)
{
	string str="";
    int l = pow(10, length);
    for (size_t i = 0; i < l; i++)

    {
		string iS=to_string(i);
		if(iS.length()<length){
			
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



