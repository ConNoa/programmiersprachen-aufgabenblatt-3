#include "circle.hpp"	
#include "mat2.hpp"
#include <cmath>


Circle::Circle():
	radius{1.0}{}


Circle::Circle(vector const& radius_in):
	radius{radius_in}
	{}



	float Circle::get_radius() const
	{
		return radius;
	}



	float Circle::circumreference() const
	{

		return (2*M_PI*radius);
	}



	bool operator<(Circle const& c1)
	{
		return radius()<c1.radius();

	}
	

	bool operator>(Circle const& c1)
	{
		return radius()>c1.radius();

	}


	bool operator==(Circle const& c1)
	{
		return radius()==c1.radius();

	}
