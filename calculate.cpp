/**
 * calculate class 
 *
 * @author Israel Buskila and Moran Oshia
 * @since 04-2019
 */
#include "calculate.hpp"
  
std::string calculateBullAndPgia(std::string choice, std::string guess){
	//calculate the number of bull and pgia that the same as the chooser
        std::string r = "";
		
		int bull = 0,pgia=0,i;
		int b=0;
		int numChoice[10]={0},numGuess[10]={0};
		if(choice.size()!=guess.size())
		{
			throw std::invalid_argument( "the length is not equal");
		}
		    


		

		else{


			int bull = 0;

			int pgia = 0;

			int length = choice.length();

			int numbers[10] = {0};
			int n;
			int c[10]={0},numGuess[10]={0};
			for(int i=0; i<length; i++)

			{
				

				if(choice.at(i) == guess.at(i))

				{

					bull++;

				}

				else

				{ 
					numGuess[guess.at(i) - '0']++;
					numChoice[choice.at(i) - '0']--;
					
					if(numGuess[guess.at(i) - '0']+numChoice[guess.at(i) - '0']==0)
					{
						pgia++;
						numGuess[guess.at(i) - '0']=0;
					}
					if(numGuess[choice.at(i) - '0']+numChoice[choice.at(i) - '0']==0)
					{
						pgia++;
						numChoice[choice.at(i) - '0']=0;
					}

				} 

			} // End for
			for(int i=0; i<10; i++)
			{
				
			}

			string ans = to_string(bull) + "," + to_string(pgia);

			return ans;
					}
		
}
