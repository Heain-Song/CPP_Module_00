
#include "PhoneBook.hpp"

void		PhoneBook::search()
{
	int			i;
	std::string	user_input_index;

	std::cout << std::right << std::setw(10) << "Index" << " | ";
	std::cout << std::right << std::setw(10) << "First name" << " | ";
	std::cout << std::right << std::setw(10) << "Last name" << " | ";
	std::cout << std::right << std::setw(10) << "Nickname" << " | ";
	std::cout << std::endl;

	i = 0;
	while (i < this->index)
	{
		std::cout << std::right << std::setw(10) << i << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getFirstName()) << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getLastName()) << " | ";
		std::cout << std::right << std::setw(10) << this->truncate(this->contacts[i].getNickname()) << " | ";
		std::cout << std::endl;
		i++;
	}
	// do {
	// 	if (std::cin.fail())
	// 		return ;
	// 	std::cout << "Enter the index between 0 and 7 : ";
	// 	if (!getline(std::cin, user_input_index))
	// 		return ;
	// 	if (!(('0' <= user_input_index[0] && user_input_index[0] <= '7') && (user_input_index.size() ==1)))
	// 		return ;
	// 	if (isdigit(user_input_index[0]))
	// 		i = std::atoi(user_input_index.c_str());
	// 	else
	// 		i = -1;

	// } while (i < 0 || i > (this->index - 1));

	// display summary
	// index input
	// index input valid -> show details
	// index input invalid -> terminate SEARCH
	if (std::cin.fail())
		return ;
	std::cout << "To see details, enter the index between 0 and 7 : ";
	if (!getline(std::cin, user_input_index))
		return ;
	// if (!(('0' <= user_input_index[0] && user_input_index[0] <= '7') && (user_input_index.size() ==1)))
	// 		return ;
	if (isdigit(user_input_index[0]))
		i = std::atoi(user_input_index.c_str());
	if ((0 <= i && i <= 7) && (this->contacts[i].getFirstName().length() != 0))
	{
		std::cout << "First name : " << this->contacts[i].getFirstName() << std::endl;
		std::cout << "Last name : " << this->contacts[i].getLastName() << std::endl;
		std::cout << "Nickname : " << this->contacts[i].getNickname() << std::endl;
		std::cout << "Phone number : " << this->contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << this->contacts[i].getDarkestSecret() << std::endl;
	}
	else
		return ;
}

void		PhoneBook::add()
{
	std::string tmp_string;

	// if (this->index == 8)
		// this->index = 0;

	std::cout << "First name : ";
	if (!getline(std::cin, tmp_string))
		return ;
	this->contacts[this->index % 8].setFirstName(tmp_string);

	std::cout << "Last name : ";
	if (!getline(std::cin, tmp_string))
		return ;
	this->contacts[this->index % 8].setLastName(tmp_string);

	std::cout << "Nickname : ";
	if (!getline(std::cin, tmp_string))
		return ;
	this->contacts[this->index % 8].setNickname(tmp_string);

	std::cout << "Phone number : ";
	if (!getline(std::cin, tmp_string))
		return ;
	this->contacts[this->index % 8].setPhoneNumber(tmp_string);

	std::cout << "Darkest Secret : ";
	if (!getline(std::cin, tmp_string))
		return ;
	this->contacts[this->index % 8].setDarkestSecret(tmp_string);

	// if (this->index % 8 == 1)
	// {
	// std::cout << this->contacts[this->index % 8].getFirstName() << std::endl;
	// std::cout << this->contacts[this->index % 8].getLastName() << std::endl;
	// std::cout << this->contacts[this->index % 8].getNickname() << std::endl;
	// std::cout << this->contacts[this->index % 8].getPhoneNumber() << std::endl;
	// std::cout << this->contacts[this->index % 8].getDarkestSecret() << std::endl;
	// }
	this->increaseIndex();
	// this->index++;
	// do{
	// 	std::cout << "First name : ";
	// 	if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].first_name))
	// 		return false;
	// 	i = 0;
	// 	while (i++ < phonebook.contacts[phonebook.index % 8].first_name.length())
	// 	{
	// 		if (phonebook.contacts[phonebook.index % 8].first_name[i] == '\t')
	// 			phonebook.contacts[phonebook.index % 8].first_name[i] = ' ';
	// 	}
	// }
	// while (phonebook.contacts[phonebook.index % 8].first_name.length() == 0);

	// do {
	// 	std::cout << "Last name : ";
	// 	if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].last_name))
	// 		return false;
	// 	i = 0;
	// 	while (i++ < phonebook.contacts[phonebook.index % 8].last_name.length())
	// 	{
	// 		if (phonebook.contacts[phonebook.index % 8].last_name[i] == '\t')
	// 			phonebook.contacts[phonebook.index % 8].last_name[i] = ' ';
	// 	}
	// }
	// while (phonebook.contacts[phonebook.index % 8].last_name.length() == 0);

	// do {
	// 	std::cout << "Nickname : ";
	// 	if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].nickname))
	// 		return false;
	// 	i = 0;
	// 	while (i++ < phonebook.contacts[phonebook.index % 8].nickname.length())
	// 	{
	// 		if (phonebook.contacts[phonebook.index % 8].nickname[i] == '\t')
	// 			phonebook.contacts[phonebook.index % 8].nickname[i] = ' ';
	// 	}
	// }
	// while (phonebook.contacts[phonebook.index % 8].nickname.length() == 0);

	// do {
	// 	std::cout << "Phone number : ";
	// 	if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].phone_number))
	// 		return false;
	// 	i = 0;
	// 	while (i++ < phonebook.contacts[phonebook.index % 8].phone_number.length())
	// 	{
	// 		if (phonebook.contacts[phonebook.index % 8].phone_number[i] == '\t')
	// 			phonebook.contacts[phonebook.index % 8].phone_number[i] = ' ';
	// 	}
	// }
	// while (phonebook.contacts[phonebook.index % 8].phone_number.length() == 0);

	// do {
	// 	std::cout << "Darkest secret : ";
	// 	if (!getline(std::cin, phonebook.contacts[phonebook.index % 8].darkest_secret))
	// 		return false;
	// 	i = 0;
	// 	while (i++ < phonebook.contacts[phonebook.index % 8].darkest_secret.length())
	// 	{
	// 		if (phonebook.contacts[phonebook.index % 8].darkest_secret[i] == '\t')
	// 			phonebook.contacts[phonebook.index % 8].darkest_secret[i] = ' ';
	// 	}
	// }
	// while (phonebook.contacts[phonebook.index % 8].darkest_secret.length() == 0);
	// return true;
}

std::string	PhoneBook::truncate(std::string	str){

	if (str.length() > 10)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void		PhoneBook::increaseIndex()
{
	this->index++;
}
