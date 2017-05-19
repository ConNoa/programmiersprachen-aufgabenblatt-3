#include <cstdlib>			// std :: rand () 		gibt standard random zahl zurück
#include <vector>			// std::vector<> 		sequentieller Container der Arrays dynamischer Größe kapselt
#include <list>				// std::list<>			standard container den man schnellund einfach befüllen, bzw wieder entlehren kann
#include <iostream>			// Standard Input / Output Streams Library
#include <ctime>
#include <set>
# include <iterator>
# include <algorithm>
#include <map>

int main()
{
	
	std::list<unsigned int> list1(0); 			//initialisieren der ersten Liste

	std::srand(std::time(0));						//zurücksetzen der randdomzeit

	int ListSize = 100;								//Größe der Random-Zahlen Liste
		
	for (int x=0; x<ListSize; ++x)					//Schleife die über die Listengröße iteriert				
	{
		unsigned int i = std::rand();				// i wird ein random-Wert zugewiesen
		i = i%101;									//Modulo 101 für Zufallszahlen von 0 bis100
		list1.push_back(i);					
	}
	
 	std::vector<unsigned int> vector1;			//initialisieren des ersten Vectors
	std::copy( list1.begin(), list1.end(), 
				std::back_inserter(vector1) );	//std::copy funktion kopiert aus list1 von anfang bis Ende
													//und fügt diesen Datensatz in vector1 ein
    												//Datensatz in Liste bleibt enthalten

	
	std::set<int> set1 {};

	for (int i : vector1) 						
    { 
	set1.insert(i);
    }

    for (int i : vector1) 						
    { // c++11 range-based for loop
        std::cout << i << '\n';
    } 

    std::cout << "Größe erstes Set: " << set1.size() << '\n';
    std::cout << "Zahlen die nicht vorkommen"<< '\n';


    for (int i=1; i<101; i++)
	{
		if (set1.count(i)==0) // Gibt die werte 
		{
			std :: cout <<  i << "\n";
		}
	}    
  	
  	std::map<unsigned int, unsigned int> map1;

for ( auto & i : list1)
{
	std :: cout << "hier; " << i << "\n";	
	map1[i]++;
}

for (  int i = 0; i <= 100 ;++i)
{
	std::cout<<"Zahl "<<i<<" existiert "<<map1[i]<<" mal!"<<std::endl;
}

    return 0;

}
