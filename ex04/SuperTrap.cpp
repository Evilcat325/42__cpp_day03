#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string iname) : ClapTrap(60U, 120U, 60U, 5U, 0U)
{
	name = iname;
	type = "SUPER";
	hit_points = 60;
	energy_points = 120;
	level = 1;
	std::cout << type << "   " << name << " initizaling..." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << type << " " << type << " self destructing..." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rhs)
{
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
{
}
