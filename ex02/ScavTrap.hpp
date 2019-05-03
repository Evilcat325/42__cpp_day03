#ifndef FT_SCAVTRAP_HPP
#define FT_SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &rhs);
	ScavTrap &operator=(ScavTrap const &rhs);
	void challengeMeaningOfLife();
	void challengeHowToPiscine();
	void challengeHowToBocal();
	void challengeHowToCPP();
	void challengeHowToRoot();
	void challengeNewcomer();
};

typedef void (ScavTrap::*Challenge_Fn)();

#endif /* FT_ScavTrap_HPP */
