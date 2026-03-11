#include "Contact.hpp"
#include <iostream>

void Contact::setContact()
{
	std::cout<< "First Name: ";
	std::getline(std::cin, firstName);

	std::cout << "Last name: ";
	std::getline(std::cin, lastName);

	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);

	std::cout << "Phone number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
}

void Contact::displayContact()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string Contact::getFirstName()
{
	return firstName;
}

std::string Contact::getLastName()
{
	return lastName;
}

std::string Contact::getNickname()
{
	return nickname;
}
