#include "PhoneBook.hpp"

void		PhoneBook::search()
{
	int			i;
	std::string	input;

	std::cout << std::right << std::setw(10) << "Index" << " | ";
	std::cout << std::right << std::setw(10) << "First name" << " | ";
	std::cout << std::right << std::setw(10) << "Last name" << " | ";
	std::cout << std::right << std::setw(10) << "Nickname" << " | ";
	std::cout << std::endl;

	i = 0;
	while (i < 8)
	{
		std::cout << std::right << std::setw(10) << i << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getFirstName()) << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getLastName()) << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getNickname()) << " | ";
		std::cout << std::endl;
		i++;
	}

	if (std::cin.fail())
		return ;
	std::cout << "To see details, enter the index between 0 and 7 : ";
	if (!getline(std::cin, input))
		return ;
	if (isdigit(input[0]))
	{
		i = std::atoi(input.c_str());
		if (0 <= i && i <= 7)
		{
			std::cout << "First name : " << this->contacts[i].getFirstName() << std::endl;
			std::cout << "Last name : " << this->contacts[i].getLastName() << std::endl;
			std::cout << "Nickname : " << this->contacts[i].getNickname() << std::endl;
			std::cout << "Phone number : " << this->contacts[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret : " << this->contacts[i].getDarkestSecret() << std::endl;
		}
	}
	else
		return ;
}

void		PhoneBook::add()
{
	std::string tmp;

	std::cout << "First name : ";
	if (!getline(std::cin, tmp))
		return ;
	this->contacts[this->getIndex()].setFirstName(tmp);

	std::cout << "Last name : ";
	if (!getline(std::cin, tmp))
		return ;
	this->contacts[this->getIndex()].setLastName(tmp);

	std::cout << "Nickname : ";
	if (!getline(std::cin, tmp))
		return ;
	this->contacts[this->getIndex()].setNickname(tmp);

	std::cout << "Phone number : ";
	if (!getline(std::cin, tmp))
		return ;
	this->contacts[this->getIndex()].setPhoneNumber(tmp);

	std::cout << "Darkest Secret : ";
	if (!getline(std::cin, tmp))
		return ;
	this->contacts[this->getIndex()].setDarkestSecret(tmp);

	this->setIndex();
}

std::string	PhoneBook::truncate(std::string	str){

	if (str.length() > 10)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void		PhoneBook::setIndex()
{
	this->index++;
}

int			PhoneBook::getIndex()
{
	return (this->index % 8);
}
