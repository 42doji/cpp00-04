#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const & src );
		Brain& operator=( Brain const & rhs );
};

#endif