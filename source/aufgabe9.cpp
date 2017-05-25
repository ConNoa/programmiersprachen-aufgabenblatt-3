#define CATCH_CONFIG_RUNNER
#include "../external/catch-1.4.0/catch.hpp"
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>	

	// std :: rand () 		gibt standard random zahl zurück





TEST_CASE("LambdaTest", "[sort]")
{
	std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> v2{9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::vector<int> v3{9};
//	std::sort(s.begin(), s.end(), std::greater<int>());
	std::transform(v1.begin(), v1.end(),v2.begin(), v3.begin(),[](int const& v1, int const& v2)-> int{ return v1+v2; });
//    std::transform(std::begin(v1), std::end(v1), std::begin(v2), std::begin(v3),[] (int const& v1, int const& v2) {return v1 + v2;});
 	
 	REQUIRE (std::all_of(std::begin(v3), std::end(v3),[](int const& v3) { return v3==10;}) == true);

}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



