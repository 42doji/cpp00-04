#include "phonebook.h"
#include "contact.h"

void show_command()
{
	std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
}

int main()
{
	Phonebook phonebook;
	std::string command;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	Contact contact;

	show_command();
	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "EXIT")
			phonebook.phonebook_exit();
		else if (command == "ADD")
		{
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			contact.setFirstName(firstName);
			std::cout << "Enter last name: ";
			std::cin >> lastName;
			contact.setLastName(lastName);
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			contact.setNickName(nickname);
			if (phonebook.getIndex() == 8)
			{
				phonebook.deleteOldContactAndAddNew(contact);
			}
			else
			{
				phonebook.addContact(contact);
			}
		}
		else if (command == "SEARCH")
		{
			phonebook.displayContact();
		}
	}
	return (0);
}