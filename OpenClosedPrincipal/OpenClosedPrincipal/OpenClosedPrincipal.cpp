// OpenClosedPrincipal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Design pattern project ~~~~~~~~ " << std::endl;
	// we create some Cars 
	Car renault{"renault", Color::BLUE, Size::LARGE};
	Car peugeot{"peugeot", Color::GREEN, Size::SMALL};
	Car volvo{ "volvo", Color::BLUE, Size::LARGE };

	std::vector<Car*> collection{ &renault, &peugeot , &volvo};
	
	BetterFilter bf;

	// for color spec we need green Cars
	colorSpecification green(Color::GREEN);
	auto greenCars = bf.filter(collection, green);
	for (auto& item : greenCars)
	{
		std::cout << item->brand << " is a GREEN Cars " << std::endl;
	}

	// for size spec we need large Cars 
	sizeSpecification large(Size::LARGE);
	auto largeCars = bf.filter(collection, large);
	for (auto& item : largeCars)
	{
		std::cout << item->brand << " is a LARGE Cars " << std::endl;
	}


	std::getchar();
	return 0;
}

