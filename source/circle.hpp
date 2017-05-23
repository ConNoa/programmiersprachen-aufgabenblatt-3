#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <vector>


class Circle
{	
	public:

	Circle();
	Circle(float radius_in);
	

	//Getter
	float  			get_radius()  			const;
	float			circumreference() 		const;

	//Setter
	void 			set_radius(float radius_in);


	bool operator<(Circle const& c1);
	bool operator>(Circle const& c1);
	bool operator==(Circle const& c1);

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