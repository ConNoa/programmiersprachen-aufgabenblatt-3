#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.4.0/catch.hpp"
#include <vector>
#include <cmath>
#include <algorithm>
#include "circle.hpp"
#include <cstdlib>	

	// std :: rand () 		gibt standard random zahl zurück





TEST_CASE("sortiere Circle", "[sort]")
{

	std::vector<Circle> KreisContainer;

	int ListSize = 10;								//Größe der Random-Zahlen Liste
	
	for (int x=0; x<ListSize; ++x)					//Schleife die über die Listengröße iteriert				
	{
		float i = std::rand();				// i wird ein random-Wert zugewiesen
											//Modulo 101 für Zufallszahlen von 0 bis100
		
		KreisContainer.push_back(Circle(i));
	}
	
//	std::sort(s.begin(), s.end(), std::greater<int>());
	std::sort (KreisContainer.begin() , KreisContainer.end(), [](Circle const& c1, Circle const& c2)-> bool{return(c1.get_radius()<c2.get_radius());});
	
	REQUIRE(std::is_sorted(std::begin(KreisContainer), std::end(KreisContainer)));
}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



