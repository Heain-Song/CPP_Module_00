/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:11:24 by hesong            #+#    #+#             */
/*   Updated: 2024/03/20 17:35:03 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName()
{
	return this->first_name;
}
void		Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}
std::string	Contact::getLastName()
{
	return this->last_name;
}
void		Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}
std::string	Contact::getNickname()
{
	return this->nickname;
}
void		Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
std::string	Contact::getPhoneNumber()
{
	return this->phone_number;
}
void		Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}
std::string	Contact::getDarkestSecret()
{
	return this->darkest_secret;
}
void		Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
