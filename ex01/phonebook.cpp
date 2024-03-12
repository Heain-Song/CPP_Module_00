#include <iostream>
#include <string>
#include <climits>

class PhoneBook
{
	/*
	an array of Contact, max 8
	*/

};

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
	unsigned long long	phone_number; // the max is ULLONG_MAX in climits headerfile
	std::string	darkest_secret;
};

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		/*Variable declarations*/
		(void)argv;
		std::string cmd;
		//unsigned long long int max = ULLONG_MAX;

		/*
		Instantiated as an instance of the PhoneBook class.
		*/

		/*Instantiate as an instance of the Contact class as well.
		*/
		Contact contact1;
		std::cout << "-------------" << std::endl;
		std::cout << contact1.first_name;
		std::cout << "-------------" << std::endl;

		/*
		Prompt to enter one of 3 commands - ADD, SEARCH, EXIT
		*/

		// std::cout << "Enter a command : ";
		// std::cin >> cmd;

		// if (cmd == "ADD")
		// {
		// 	/*if ADD
		// 	- check empty fields -> can't have empty filds!!
		// 	- check if max 8 -> if 9th comes, replace the oldest one with the new one.
		// 	- Success -> Add the contact to the phonebook & waits for another one.
		// 	*/

		// 	//if (contact1.first_name == NULL || )
		// }
		// else if (cmd == "SEARCH")
		// {
		// 	/*else if SEARCH
		// 	- display the saved contacts as a list of 4 columns (index, first name, last name and nickname)

		// 	- each columns length = 10 characters
		// 		-> If the text is longer than the column, it must be truncated
		// 		-> and the last displayable character must be replaced by a dot (’.’)

		// 	- use pipe | to seperate columns

		// 	- right aligned

		// 	- prompt the user again for the index of the entry to display
		// 		-> If the index is out of range or wrong, define a relevant behavior.
		// 		-> Otherwise, display the contact information, one field per line.
		// 	*/
		// }
		// else if (cmd == "EXIT")
		// {
		// 	/* else if EXIT
		// 	- contacts delete
		// 		-> lost forever
		// 	- program quit
		// 	*/
		// }
		// else
		// {
		// /* else
		// 	- Any other input is discarded.
		// */
		// }
	}
	return 0;
}
