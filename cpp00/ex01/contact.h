#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>

class Contact
{
public:
	Contact();
	~Contact();
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickName(std::string nickname);
	std::string	getFirstName();
	std::string	getLastName();
	std::string getNickName();
	std::string getIdx();
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	idx;

};



#endif