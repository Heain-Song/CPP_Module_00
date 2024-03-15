#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		std::string cmd;
		PhoneBook phonebook;
		phonebook.index = 0;

		while (1)
		{
			if (std::cin.fail())
				return 1;
			std::cout << "Enter a command : ";
			if (!getline(std::cin, cmd))
				return 1;
			if (cmd == "ADD")
			{
				phonebook.add(phonebook);
				phonebook.index++;
			}
			else if (cmd == "SEARCH")
				phonebook.search(phonebook);
			else if (cmd == "EXIT")
				return 0;
		}
	}
	else
		std::cout << "Invalid argc" << std::endl;
	return 0;
}
