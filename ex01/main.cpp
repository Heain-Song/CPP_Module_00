#include <iostream>
#include <string>
#include <iomanip>

class Contact //stands for a phonebook contact
{
	/*
	first name
	last name
	nickname
	phone number
	darkest secret
	*/
	public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	//unsigned long long	phone_number; // the max is ULLONG_MAX in climits headerfile
	std::string phone_number; // changing to string to use getline()
	std::string	darkest_secret;
};

class PhoneBook
{
	/*
	an array of Contact, max 8
	*/
	public:
	Contact contacts[8];
};

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		/*
		Variable declarations
		*/
		std::string cmd;
		int i = 0;
		

		/*
		Instantiated as an instance of the PhoneBook class.
		*/
		PhoneBook phonebook;

		/*Instantiate as an instance of the Contact class as well.
		*/

		/*
		Prompt to enter one of 3 commands - ADD, SEARCH, EXIT
		*/
		while (1)
		{
			std::cout << "Enter a command : ";
			getline(std::cin, cmd);
	
			/*
			Execute the program according to the command
			*/
		
			if (cmd == "ADD")
			{
				/*if ADD
				- check empty fields -> can't have empty filds!!
				- check if max 8 -> if 9th comes, replace the oldest one with the new one.
				- Success -> Add the contact to the phonebook & waits for another one.
				*/
				if (i > 7)
					i = 0;
				if (i < 8)
				{
					std::cout << "First name : "; // when input is empty/space, it falls into infinite loops..
					getline(std::cin, phonebook.contacts[i].first_name);
	
					std::cout << "Last name : ";
					getline(std::cin, phonebook.contacts[i].last_name);
		
					std::cout << "Nickname : ";
					getline(std::cin, phonebook.contacts[i].nickname);
						
					std::cout << "Phone number : ";
					getline(std::cin, phonebook.contacts[i].phone_number);
					
					std::cout << "Darkest secret : ";
					getline(std::cin, phonebook.contacts[i].darkest_secret);
					
					/*verify if the inputs are safely saved
					std::cout << "-----Current Index is " << i << "-----" << std::endl;
					std::cout << "Your first name is " << phonebook.contacts[i].first_name << std::endl;
					std::cout << "Your last name is " << phonebook.contacts[i].last_name << std::endl;
					std::cout << "Your nickname is " << phonebook.contacts[i].nickname << std::endl;
					std::cout << "Your phone number is " << phonebook.contacts[i].phone_number << std::endl;
					std::cout << "Your secret is " << phonebook.contacts[i].darkest_secret << std::endl;
					*/

					/*if (phonebook.contacts[i].first_name == || phonebook.contacts[i].last_name == NULL || phonebook.contacts[i].nickname == NULL
							|| phonebook.contacts[i].phone_number == NULL || phonebook.contacts[i].darkest_secret == NULL)
					{
						std::cout << "Error: Can't have empty fields" << std::endl;	
					}*/
					i++;
				}
			}
			if (cmd == "SEARCH")
			{
				/*else if SEARCH
				- display the saved contacts as a list of 4 columns (index, first name, last name and nickname)

				- each columns length = 10 characters
				-> If the text is longer than the column, it must be truncated
				-> and the last displayable character must be replaced by a dot (’.’)

				- use pipe | to seperate columns (done)

				- right aligned (done)

				- prompt the user again for the index of the entry to display
				-> If the index is out of range or wrong, define a relevant behavior.
				-> Otherwise, display the contact information, one field per line.
				*/
				std::cout << std::right << std::setw(10) << "Index" << " | ";
				std::cout << std::right << std::setw(10) << "First name" << " | ";
				std::cout << std::right << std::setw(10) << "Last name" << " | ";
				std::cout << std::right << std::setw(10) << "Nickname" << " | ";
				std::cout << std::endl;
				i = 0;
				while (i < 8)
				{
					std::cout << std::right << std::setw(10) << i << " | ";
					std::cout << std::right << std::setw(10) << phonebook.contacts[i].first_name << " | ";
					std::cout << std::right << std::setw(10) << phonebook.contacts[i].last_name << " | ";
					std::cout << std::right << std::setw(10) << phonebook.contacts[i].nickname << " | ";
					std::cout << std::endl;
					i++;
				}

			}
			if (cmd == "EXIT")
			{
				/* else if EXIT
				- contacts delete
					-> lost forever
				- program quit
				*/
				break;
			}
			/*else
			{
			 else
				- Any other input is discarded.
				std::cout << "Invalid Command" << std::endl;
			}*/ 
			}
		}
		else
			std::cout << "Invalid argc" << std::endl;
	return 0;
}
