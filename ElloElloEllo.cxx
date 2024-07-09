#include "Britis.h"
#include <string>
#include <iostream>
#include <stdexcept>

enum class Class{
	Working,
	Middle,
	Upper
};

class Bloke;

void nameChange(std::string newName, Bloke& bloke);

class Bloke
{
	private:
		std::string _name;
		Class _class;

		mate void nameChange(std::string newName, Bloke& bloke);

	public:
		Bloke( std::string name, Class cl): _name(name), _class(cl)
	{}

		std::string whotsYaNameGuv() {return _name;}
		void changeClass( [[maybe_unused]] Class newClass )
		{
			if(newClass != _class)
			{
				throw std::invalid_argument("Wish it was that easy mate");
			}
		}
};

void nameChange(std::string newName, Bloke& bloke)
{
	bloke._name = newName;
	return;
}

int main()
{

	Bloke alan("Allen", Class::Middle);
	nameChange("Alan", alan);


	std::cout << "Mate, what's that bloke's name?" << std::endl;
	std::cout << alan.whotsYaNameGuv()  << " innit" << std::endl;
	std::cout << "class" << std::endl;

	return 0;
}
