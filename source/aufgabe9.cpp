#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <algorithm>






TEST_CASE("Addition", "[vec1 und vec2]")
{
	std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> v2{9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::vector<int> v3(9);


	std::transform(v1.begin(), v1.end(),v2.begin(), v3.begin(),[](int const& v1, int const& v2)-> int{ return v1+v2; });
 	
 	REQUIRE (std::all_of(std::begin(v3), std::end(v3),[](int const& v3) { return v3==10;}) == true);

}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



