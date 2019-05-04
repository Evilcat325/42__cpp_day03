#ifndef FT_NINJATRAP_HPP
#define FT_NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:
	NinjaTrap();

public:
	NinjaTrap(std::string iname);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const &rhs);
	NinjaTrap &operator=(NinjaTrap const &rhs);
	void ninjaShoebox(FragTrap &subject);
	void ninjaShoebox(ScavTrap &subject);
	void ninjaShoebox(NinjaTrap &subject);
	void ninjaShoebox(ClapTrap &ClapTrap);
};

#endif /* FT_NinjaTrap_HPP */
