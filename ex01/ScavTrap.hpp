#ifndef FT_SCAVTRAP_HPP
#define FT_SCAVTRAP_HPP

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
};

#endif /* FT_ScavTrap_HPP */
