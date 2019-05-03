#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : FragTrap(100U, 50U, 20U, 15U, 3U)
{
	this->name = name;
	this->type = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->level = 1;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : FragTrap(rhs)
{
}
