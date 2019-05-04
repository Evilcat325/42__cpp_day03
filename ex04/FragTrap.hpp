#ifndef FT_FRAGTRAP_HPP
#define FT_FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  private:
	FragTrap();

  public:
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	FragTrap &operator=(FragTrap const &rhs);

	void segFaultAttack(std::string const &target);
	void busErrorAttack(std::string const &target);
	void doubleFreeAttack(std::string const &target);
	void divisionByZeroAttack(std::string const &target);
	void theSnapAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

typedef void (FragTrap::*Attack_Fn)(std::string const &target);

#endif /* FT_FragTrap_HPP */
