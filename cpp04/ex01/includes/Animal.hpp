#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( std::string type );
		virtual	~Animal( void );

		Animal( Animal const & src );
		Animal& operator=( Animal const & rhs );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif