#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.4.0/catch.hpp"
#include <vector>
#include <algorithm>
#include "circle.hpp"
#include <cstdlib>	

	// std :: rand () 		gibt standard random zahl zurück





TEST_CASE("sortiere Circle", "[sort]")
{

	std::vector<Circle> circles{{1.0f},{3.0f},{2.5f},{5.6f},{8.2f},{4.3f},{6.3f},{2.6f},{1.8f}};
	std::vector<Circle> bigcircles(circles.size());

  	auto it = std::copy_if (circles.begin(), circles.end(), bigcircles.begin(), [](Circle i){return (i.get_radius()>4.0f);});
  	bigcircles.resize(std::distance(bigcircles.begin(),it));

	REQUIRE(std::all_of(bigcircles.begin(), bigcircles.end(), [](Circle i){return (i.get_radius()>3);}));
}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



