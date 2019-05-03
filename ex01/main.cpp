#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void test(FragTrap &subject)
{
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("CPP");
	subject.rangedAttack("Makefile");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.charge(2000);
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.charge(2000);
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.charge(2000);
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
	subject.vaulthunter_dot_exe("PDF");
}
int main()
{
	ScavTrap ft("marvel");
	std::srand(std::time(nullptr));
	test(ft);
	// FragTrap ft2 = ft;
	// ft2.charge(200);
	// ft2.vaulthunter_dot_exe("INTRA");
	// test(ft2);

	return 0;
}
