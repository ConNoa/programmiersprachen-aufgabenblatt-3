#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <cmath>

class Circle
{	
	public:

	Circle();
	Circle(float radius_in);
	

	//Getter
	float  			get_radius()  			const;
	float			circumreference() 		const;

	//Setter
//	void 			set_radius(float radius_in);


	bool operator <	(Circle const& c1) const;
	bool operator >	(Circle const& c1) const;
	bool operator ==	(Circle const& c1)const;
	

	/*

	Warum so wie dort oben geschrieben und nicht so:


Circle operator<(Circle const& c1, Circle const& c2)
Circle operator>(Circle const& c1, Circle const& c2);
Circle operator==(Circle const& c1, Circle const& c2);

	*/


	private:

	float radius;

	
};


	
#endif