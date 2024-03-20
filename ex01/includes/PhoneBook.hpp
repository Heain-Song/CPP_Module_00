#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <stdbool.h>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	int		index;

	public:
	PhoneBook()
	{
		this->index = 0;
	}

	int			getIndex();
	void		increaseIndex();
	void		add();
	void		search();
	std::string truncate(std::string str);
};
