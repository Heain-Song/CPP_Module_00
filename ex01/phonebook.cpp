#include <iostream>
#include <string>

class PhoneBook
{
	//default private
	//if public -> public:
	//what can be inside? - variables, functions

	/*
	an array of Contact
	*/
	// NO Dynamic allocation allowed


};

class Contact
{
	/*
	first name
	last name
	nickname
	phone number
	darkest secret
	*/

};

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::string input = argv[1];
		std::cout << input << std::endl;

		/*
		Instantiated as an instance of the PhoneBook class.
		*/

		/*Instantiate as an instance of the Contact class as well.
		*/

		/*
		Prompt to enter one of 3 commands - ADD, SEARCH, EXIT
		*/

		/*if ADD
			- check empty fields -> can't have empty filds!!
			- check if max 8 -> if 9th comes, replace the oldest one with the new one.
			- Success -> Add the contact to the phonebook & waits for another one.

		*/

		/*else if SEARCH
			- display the saved contacts as a list of 4 columns (index, first name, last name and nickname)

			- each columns length = 10 characters
				-> If the text is longer than the column, it must be truncated
				-> and the last displayable character must be replaced by a dot (’.’)

			- use pipe | to seperate columns

			- right aligned

			- prompt the user again for the index of the entry to display
				-> If the index is out of range or wrong, define a relevant behavior.
				-> Otherwise, display the contact information, one field per line.
		*/

		/* else if EXIT
			- contacts delete
				-> lost forever
			- program quit
		*/

		/* else
			- Any other input is discarded.

		*/
	}
	return 0;
}
