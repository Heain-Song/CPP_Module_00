#include <string>

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string	darkest_secret;

	public:
	std::string	getFirstName();
	void		setFirstName(std::string first_name);
	std::string	getLastName();
	void		setLastName(std::string last_name);
	std::string	getNickname();
	void		setNickname(std::string nickname);
	std::string	getPhoneNumber();
	void		setPhoneNumber(std::string phone_number);
	std::string	getDarkestSecret();
	void		setDarkestSecret(std::string darkest_secret);
};
