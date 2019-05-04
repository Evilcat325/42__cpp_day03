#ifndef FT_SUPERTRAP_HPP
#define FT_SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
  private:
	SuperTrap();

  public:
	SuperTrap(std::string iname);
	~SuperTrap();
	SuperTrap(SuperTrap const &rhs);
	SuperTrap &operator=(SuperTrap const &rhs);
};

#endif /* FT_SuperTrap_HPP */
