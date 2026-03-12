#include "Contact.hpp"
#include <iostream>

static std:: string get_input(std::string prompt)
{
	std::string input = "";
	while (input.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			return "";
		if (input.empty())
			std::cout << "The field cannot be empty!" << std::endl;
	}
	return input;
}

void Contact::setContact()
{
	firstName = get_input("First Name: ");
	lastName = get_input("Last name: ");
	nickname = get_input("Nickname: ");
	phoneNumber = get_input("Phone number: ");
	darkestSecret = get_input("Darkest secret: ");
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
