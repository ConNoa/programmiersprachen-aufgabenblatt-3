#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <algorithm>
#include "filter.hpp"


bool is_even(int n)
{
	return n%2 == 0;
}



TEST_CASE("Funktionstemplate filter", "[std::vector]")
{
	std::vector<int> v1{1, 2, 3, 4, 5, 6};
	std::vector<int> alleven = filter(v1, is_even);

//	alleven.shrink_to_fit();

  	REQUIRE (std::all_of(alleven.begin(), alleven.end(), [] (int a) { return (a%2)!=1;}));
}

int main (int argc, char* argv[])
{

	return Catch::Session().run(argc, argv);

}



