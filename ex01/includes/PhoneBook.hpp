#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <stdbool.h>
#include "Contact.hpp"

class PhoneBook
{
	public:
	Contact contacts[8];
	int		index;
	bool		add(PhoneBook &phonebook);
	bool		search(PhoneBook &phonebook);
	std::string truncate(std::string str);
};
