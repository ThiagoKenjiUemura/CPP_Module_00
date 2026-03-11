#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	index = 0;
	total = 0;
}

void PhoneBook::addContact()
{
	contacts[index].setContact();
	index++;

	if (index == 8)
		index = 0;
	
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

	int i = 0;

	while (i < total)
	{
		std::cout  << std::setw(10) << i << "|"
				   << std::setw(10) << contacts[i].getFirstName() << "|"
				   << std::setw(10) << contacts[i].getLastName() << "|"
				   << std::setw(10) << contacts[i].getNickname()
				   << std::endl;
		i++;
	}

	std::cout << "Enter index: ";

	int indexInput;
	std::cin >> indexInput;
	std::cin.ignore();

	if (indexInput < 0 || indexInput >= total)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}

	contacts[indexInput].displayContact();
}
