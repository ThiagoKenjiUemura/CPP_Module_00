#include "PhoneBook.hpp"
#include <iomanip>

std::string formatString(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

PhoneBook::PhoneBook():index(0), total(0){}

void PhoneBook::addContact()
{
	contacts[index].setContact();

	index = (index + 1) % 8;
	if (total < 8)
		total++;
}

void PhoneBook::searchContact()
{
	if (total == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}

	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname"
				<< std::endl;

	for (int i = 0; i < total; i++) 
	{
		std::cout	<< "|" << std::setw(10) << i 
					<< "|" << std::setw(10) << formatString(contacts[i].getFirstName()) 
					<< "|" << std::setw(10) << formatString(contacts[i].getLastName()) 
					<< "|" << std::setw(10) << formatString(contacts[i].getNickname()) << "|" << std::endl;
	}

	std::cout << "Enter index: ";
	std::string input;
	std::getline(std::cin, input);

	if (input.length() == 1 && input[0] >= '0' && input[0] < '0' + total)
	{
		int idx = input[0] - '0';
		contacts[idx].displayContact();
	} 
	else 
		std::cout << "Invalid index!" << std::endl;
}
