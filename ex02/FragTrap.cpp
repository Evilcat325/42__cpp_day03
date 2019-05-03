#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(100U, 100U, 30U, 20U, 5U)
{
	this->name = name;
	this->type = "FR4G-TP";
	hit_points = 100;
	energy_points = 100;
	level = 1;
	std::cout << type << "   " << name << " initizaling..." << std::endl;
}

FragTrap::FragTrap() : ClapTrap(100U, 100U, 30U, 20U, 5U)
{
	std::cout << "notype nonamed initizaling..." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << type << " " << name << " self destructing..." << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(100U, 100U, 30U, 20U, 5U)
{
	std::cout << "copying " << rhs.type << std::endl;
	*this = rhs;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "assigning " << rhs.type << std::endl;
	this->name = rhs.name;
	this->type = rhs.type;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->level = rhs.level;
	return *this;
}

void FragTrap::segFaultAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via SIGSEGV, causing " << 30
			  << " points of damage !" << std::endl;
}
void FragTrap::busErrorAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via SIGBUS, causing " << 25
			  << " points of damage !" << std::endl;
}
void FragTrap::doubleFreeAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via FREEFREE, causing " << 50
			  << " points of damage !" << std::endl;
}
void FragTrap::divisionByZeroAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via 0.0/0.0, attack failed"
			  << " emeny has infinity stones" << std::endl;
}
void FragTrap::theSnapAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via the Snap, causing... ";
	int servived = std::rand() % 2 == 1;
	if (servived)
		std::cout << "0 damage, " << target
				  << " not selected to VFXed" << std::endl;
	else
		std::cout << "infinite damages, " << target
				  << " target VFXed, burning money, buying gcp gpu cluster, mining bitcoin" << std::endl;
}
void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static Attack_Fn attacks[] = {
		&FragTrap::segFaultAttack,
		&FragTrap::busErrorAttack,
		&FragTrap::doubleFreeAttack,
		&FragTrap::divisionByZeroAttack,
		&FragTrap::theSnapAttack};
	std::cout
		<< type << " " << name << " initiate random attack at " << target << std::endl;
	if (energy_points < 25U)
		std::cout << " No enough energy please charge " << std::endl;
	else
	{
		int random = std::rand() % (sizeof(attacks) / sizeof(Attack_Fn));
		(this->*attacks[random])(target);
		energy_points -= 25U;
	}
}
