#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <cmath>
#include <algorithm>

bool is_multiple_of_3(int i)
{
	return(i%3) ==0;
}
bool isnot_multiple_of_3(int i)
{
	return(i%3) !=0;
}


TEST_CASE("filtere alle vielfachen von 3", "[erase]")
{
	std::vector<unsigned int> v;

	int ListSize = 100;								//Größe der Random-Zahlen Liste
		
	for (int x=0; x<ListSize; ++x)					//Schleife die über die Listengröße iteriert				
	{
		unsigned int i = std::rand();				// i wird ein random-Wert zugewiesen
		i = i%101;									//Modulo 101 für Zufallszahlen von 0 bis100
		v.push_back(i);					
	}
	
	v.erase(std::remove_if(v.begin(), v.end(), isnot_multiple_of_3),v.end()); //lösche aus v von v.begin bis v.end alle zahlen, bei denen is_multiple_of3 nicht zutrifft.
/*
    std::cout << "Größe erster VEc2: " << v.size() << '\n';

    for (int i : v) 						
    { // c++11 range-based for loop
        std::cout << i << '\n';
    } 

*/
	REQUIRE(std::all_of(v.begin(), v.end(), is_multiple_of_3));
}

int main (int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}



