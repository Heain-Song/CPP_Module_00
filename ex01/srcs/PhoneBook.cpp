
#include "PhoneBook.hpp"

bool		PhoneBook::search(PhoneBook &phonebook)
{
	int			i;
	std::string	user_input_index;

	std::cout << std::right << std::setw(10) << "Index" << " | ";
	std::cout << std::right << std::setw(10) << "First name" << " | ";
	std::cout << std::right << std::setw(10) << "Last name" << " | ";
	std::cout << std::right << std::setw(10) << "Nickname" << " | ";
	std::cout << std::endl;

	i = 0;
	while ((i < phonebook.index) && (i < 8))
	{
		std::cout << std::right << std::setw(10) << i << " | ";
		std::cout << std::right << std::setw(10) << phonebook.truncate(phonebook.contacts[i].first_name) << " | ";
		std::cout << std::right << std::setw(10) << phonebook.truncate(phonebook.contacts[i].last_name) << " | ";
		std::cout << std::right << std::setw(10) << phonebook.truncate(phonebook.contacts[i].nickname) << " | ";
		std::cout << std::endl;
		i++;
	}
	do {
		if (std::cin.fail())
			return false;
		std::cout << "Enter the index between 0 and 7 : ";
		if (!getline(std::cin, user_input_index))
			return false;
		if (isdigit(user_input_index[0]))
			i = std::atoi(user_input_index.c_str());
		else
			i = -1;
	} while (i < 0 || i > (phonebook.index - 1));
	std::cout << "First name : " << phonebook.contacts[i].first_name << std::endl;
	std::cout << "Last name : " << phonebook.contacts[i].last_name << std::endl;
	std::cout << "Nickname : " << phonebook.contacts[i].nickname << std::endl;
	std::cout << "Phone number : " << phonebook.contacts[i].phone_number << std::endl;
	std::cout << "Darkest secret : " << phonebook.contacts[i].darkest_secret << std::endl;
	return true;
}

bool		PhoneBook::add(PhoneBook &phonebook)
{
	unsigned long i;

	do{
		std::cout << "First name : ";
		if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].first_name))
			return false;
		i = 0;
		while (i++ < phonebook.contacts[phonebook.index % 8].first_name.length())
		{
			if (phonebook.contacts[phonebook.index % 8].first_name[i] == '\t')
				phonebook.contacts[phonebook.index % 8].first_name[i] = ' ';
		}
	}
	while (phonebook.contacts[phonebook.index % 8].first_name.length() == 0);

	do {
		std::cout << "Last name : ";
		if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].last_name))
			return false;
		i = 0;
		while (i++ < phonebook.contacts[phonebook.index % 8].last_name.length())
		{
			if (phonebook.contacts[phonebook.index % 8].last_name[i] == '\t')
				phonebook.contacts[phonebook.index % 8].last_name[i] = ' ';
		}
	}
	while (phonebook.contacts[phonebook.index % 8].last_name.length() == 0);

	do {
		std::cout << "Nickname : ";
		if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].nickname))
			return false;
		i = 0;
		while (i++ < phonebook.contacts[phonebook.index % 8].nickname.length())
		{
			if (phonebook.contacts[phonebook.index % 8].nickname[i] == '\t')
				phonebook.contacts[phonebook.index % 8].nickname[i] = ' ';
		}
	}
	while (phonebook.contacts[phonebook.index % 8].nickname.length() == 0);

	do {
		std::cout << "Phone number : ";
		if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].phone_number))
			return false;
		i = 0;
		while (i++ < phonebook.contacts[phonebook.index % 8].phone_number.length())
		{
			if (phonebook.contacts[phonebook.index % 8].phone_number[i] == '\t')
				phonebook.contacts[phonebook.index % 8].phone_number[i] = ' ';
		}
	}
	while (phonebook.contacts[phonebook.index % 8].phone_number.length() == 0);

	do {
		std::cout << "Darkest secret : ";
		if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].darkest_secret))
			return false;
		i = 0;
		while (i++ < phonebook.contacts[phonebook.index % 8].darkest_secret.length())
		{
			if (phonebook.contacts[phonebook.index % 8].darkest_secret[i] == '\t')
				phonebook.contacts[phonebook.index % 8].darkest_secret[i] = ' ';
		}
	}
	while (phonebook.contacts[phonebook.index % 8].darkest_secret.length() == 0);
	return true;
}

std::string	PhoneBook::truncate(std::string	str){

	if (str.length() > 10)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}
