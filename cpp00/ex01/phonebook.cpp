#include "phonebook.h"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::addContact(Contact contact)
{
	this->contacts[this->index] = contact;
	this->index++;
}

void	Phonebook::displayContact(void)
{
	int i = 0;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << this->contacts[i].getNickName() << std::endl;
		i++;
	}
}

void	Phonebook::deleteOldContactAndAddNew(Contact contact)
{
	int	i = 0;

	while (i < 7)
	{
		this->contacts[i] = this->contacts[i + 1];
		i++;
	}
	this->contacts[7] = contact;
}

int	Phonebook::getIndex()
{
	return (this->index);
}

void	Phonebook::phonebook_exit()
{
	exit(0);
}