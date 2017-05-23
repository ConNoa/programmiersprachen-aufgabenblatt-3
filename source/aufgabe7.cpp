#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <cmath>
#include <algorithm>
#include "circle.hpp"





TEST_CASE("sortiere Circle", "[sort]")
{

	std::vector<Circle> KreisContainer;

	int ListSize = 10;								//Größe der Random-Zahlen Liste
		
	for (int x=0; x<ListSize; ++x)					//Schleife die über die Listengröße iteriert				
	{
		unsigned int i = std::rand();				// i wird ein random-Wert zugewiesen
		i = i%101;									//Modulo 101 für Zufallszahlen von 0 bis100
		KreisContainer.push_back(i);					
	}
	
	std::sort (KreisContainer.begin() , KreisContainer.end());
	
	REQUIRE(std::is_sorted(KreisContainer.begin(), KreisContainer.end()));
}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



