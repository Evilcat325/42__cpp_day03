#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : max_hit_points(0U), max_energy_points(0U), melee_atkdmg(0U), ranged_atkdmg(0U), armor_dmg_deduction(0U)
{
	std::cout << "initalizeing a claptrap via a private method" << std::endl;
}

ClapTrap::ClapTrap(const unsigned int mxp, const unsigned int mep,
				   const unsigned int matkdmg, const unsigned int ratkdmg, const unsigned int armor) : max_hit_points(mxp), max_energy_points(mep), melee_atkdmg(matkdmg), ranged_atkdmg(ratkdmg), armor_dmg_deduction(armor)
{
	std::cout << "initalizeing a claptrap via a protected method" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "deconstructing a claptrap" << std::endl;
}

// delegating constructor c++11
// ClapTrap::ClapTrap(ClapTrap const &rhs) : ClapTrap(100U, 100U, 30U, 20U, 5U)
ClapTrap::ClapTrap(ClapTrap const &rhs) : max_hit_points(100U), max_energy_points(100U), melee_atkdmg(30U), ranged_atkdmg(20U), armor_dmg_deduction(5U)
{
	std::cout << "copying " << rhs.type << std::endl;
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "assigning " << rhs.type << std::endl;
	this->name = rhs.name;
	this->type = rhs.type;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->level = rhs.level;
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " at range, causing " << ranged_atkdmg
			  << " points of damage !" << std::endl;
}
void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " in melee range, causing " << melee_atkdmg
			  << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount > armor_dmg_deduction ? amount - armor_dmg_deduction : 0;
	amount = amount > hit_points ? hit_points : amount;
	hit_points -= amount;
	std::cout << type << " " << name
			  << " takes " << amount
			  << " points of damage " << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	amount = amount + hit_points > max_hit_points
				 ? max_hit_points - hit_points
				 : amount;
	hit_points += amount;
	std::cout << type << " " << name
			  << " recover " << amount
			  << " points of HP " << std::endl;
}
void ClapTrap::charge(unsigned int sec)
{
	sec = sec + energy_points > max_energy_points
			  ? max_energy_points - energy_points
			  : sec;
	energy_points += sec;
	std::cout << type << " " << name
			  << " recover " << sec
			  << " points of Energy " << std::endl;
}
