#include "FragTrap.hpp"

int main()
{
	FragTrap ft("marvel");
	std::srand(std::time(nullptr));
	ft.takeDamage(50);
	ft.beRepaired(60);
	ft.takeDamage(200);
	ft.beRepaired(150);
	ft.meleeAttack("CPP");
	ft.rangedAttack("Makefile");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.charge(2000);
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	ft.vaulthunter_dot_exe("PDF");
	return 0;
}
