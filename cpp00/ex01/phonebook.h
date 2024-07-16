//
// Created by 지도일 on 2024. 7. 16..
//

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.h"
#include <iostream>
#include <iomanip>

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	void	addContact(Contact contact);
	void	displayContact(void);
	void	phonebook_exit();
	void	deleteOldContactAndAddNew(Contact contact);
	int	getIndex();
private:
	Contact	contacts[8];
	int		index;
};



#endif //CPP00_04_PHONEBOOK_H
