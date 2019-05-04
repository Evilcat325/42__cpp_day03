#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(100U, 50U, 20U, 15U, 3U)
{
	this->name = name;
	this->type = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->level = 1;
	std::cout << type << " " << name << " initizaling..." << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(100U, 50U, 20U, 15U, 3U)
{
	std::cout << "notype nonamed initizaling..." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << type << " " << name << " deconstructing..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(100U, 50U, 20U, 15U, 3U)
{
	std::cout << "copying " << rhs.type << std::endl;
	*this = rhs;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "assigning " << rhs.type << std::endl;
	this->name = rhs.name;
	this->type = rhs.type;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->level = rhs.level;
	return *this;
}

void ScavTrap::challengeMeaningOfLife()
{
	int answer;
	std::cout << "Q: Meaning of Life" << std::endl;
	std::cin >> answer;
	if (answer == -42)
		std::cout << "Yep how could you not got a -42 at this point";
	else if (answer == 42)
		std::cout << "no no no that's too easy";
	else
		std::cout << "are u at 42?";
	std::cout << std::endl;
}
void ScavTrap::challengeHowToPiscine()
{
	std::string answer;
	std::cout << "Q: How to Piscine" << std::endl;
	std::cin >> answer;
	if (answer == "github")
		std::cout << "Yep how could you not githubbed this point";
	else if (answer == "intra")
		std::cout << "no no no, intra is showing you how not to vlog";
	else
		std::cout << "are u at 42?";
	std::cout << std::endl;
}
void ScavTrap::challengeHowToBocal()
{
	std::string answer;
	std::cout << "Q: How to bocal" << std::endl;
	std::cin >> answer;
	if (answer == "cookies")
		std::cout << "Yep thats the way";
	else if (answer == "work")
		std::cout << "no no no, that is toooo normal";
	else
		std::cout << "are u at 42?";
	std::cout << std::endl;
}
void ScavTrap::challengeHowToCPP()
{
	std::string answer;
	std::cout << "Q: How to CPP, which std to use" << std::endl;
	std::cin >> answer;
	if (answer == "c++17" || answer == "c++14" || answer == "c++11")
		std::cout << "Yep how could write modern c++";
	else if (answer == "c++98")
		std::cout << "no no no, oh sry do u mean 2098 ? we need to talk about next Mega Millions Number";
	else
		std::cout << "are u at 42?";
	std::cout << std::endl;
}
void ScavTrap::challengeHowToRoot()
{
	std::string answer;
	std::cout << "Q: How to Root" << std::endl;
	std::cin >> answer;
	if (answer == "social")
		std::cout << "Yep how you get bocal account";
	else if (answer == "hack")
		std::cout << "no no no, that lose the fun part!";
	else
		std::cout << "are u at 42?";
	std::cout << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	static Challenge_Fn challengs[] = {
		&ScavTrap::challengeHowToBocal,
		&ScavTrap::challengeHowToCPP,
		&ScavTrap::challengeHowToPiscine,
		&ScavTrap::challengeHowToRoot,
		&ScavTrap::challengeMeaningOfLife};
	std::cout
		<< type << " " << name << " initiate random challenge to new comer " << std::endl;

	int random = std::rand() % (sizeof(challengs) / sizeof(Challenge_Fn));
	(this->*challengs[random])();
}
