#include "SmartGuesser.hpp"
#include <string>
#include <math.h>
using std::string;
using namespace std;
using namespace bullpgia;





string SmartGuesser::guess() 
{
    std::list<std::string>::iterator it = combination.begin();

    if (combination.size() > 1) 
    {
        std::advance(it, rand()%(combination.size()-1));
        this->temp = *it; 
    }

    else if (combination.size() == 1) 

        this->temp = *combination.begin();
    return temp;

}



void SmartGuesser::startNewGame(uint length)
{
    combination.clear();
    this->length=length;
    newList();
}


void SmartGuesser::newList()
{
	string str="";
    int size = pow(10, length);
    for (size_t i = 0; i < size; i++)

    {
		string iS=to_string(i);
		if(iS.length()<this->length){
			
			for(int u=0;u<this->length-iS.length();u++)
			{
				str="0"+str;
			}
			str=str+iS;
		}
		else{
			str=iS;
		}
        combination.push_front(str);
		str="";
    }
}

void SmartGuesser::learn(string result)
{
    list<string>::iterator it ;
    it=combination.begin();
    while (it != combination.end()) 
    {
        string pre = calculateBullAndPgia(*it, temp); 
        if (pre.compare(result) != 0) 
        {
            it = combination.erase(it);
        }

        else 
        {
            ++it;
        }
    }
    this->combination.remove(temp);
}
