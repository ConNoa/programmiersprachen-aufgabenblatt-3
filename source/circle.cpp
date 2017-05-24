#include "circle.hpp"	


Circle::Circle():
	radius{1.0f}{}


Circle::Circle(float radius_in):
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



	bool Circle::operator <(Circle const& c1) const
	{
		if(radius<c1.radius){return true;}
		return false;

	}
	

	bool Circle::operator >(Circle const& c1) const
	{
		if(radius>c1.radius){return true;}
		return false;

	}


	bool Circle::operator ==(Circle const& c1) const
	{
		if(radius ==c1.radius){return true;}
		return false;

	}