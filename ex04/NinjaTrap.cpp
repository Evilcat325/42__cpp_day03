#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string iname) : ClapTrap(60U, 120U, 60U, 5U, 0U)
{
	this->name = iname;
	this->type = "NINJA";
	hit_points = 60;
	energy_points = 120;
	level = 1;
	std::cout << type << "   " << name << " initizaling..." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << type << " " << name << " self destructing..." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs) : ClapTrap(60U, 120U, 60U, 5U, 0U)
{
	std::cout << "copying " << rhs.type << std::endl;
	*this = rhs;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
	std::cout << "assigning " << rhs.type << std::endl;
	this->name = rhs.name;
	this->type = rhs.type;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->level = rhs.level;
	return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap &subject)
{
	subject.vaulthunter_dot_exe("ninja");
}
void NinjaTrap::ninjaShoebox(ScavTrap &subject)
{
	subject.challengeNewcomer();
}
void NinjaTrap::ninjaShoebox(NinjaTrap &)
{
	std::cout << "slef-ninja-ning?" << std::endl;
}
void NinjaTrap::ninjaShoebox(ClapTrap &subject)
{
	std::cout << "This claptrap is chargin " << std::endl;
	subject.charge(50);
}
