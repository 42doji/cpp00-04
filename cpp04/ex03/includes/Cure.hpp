#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure( void );
		Cure( Cure const & src );
		~Cure( void );

		Cure &	operator=( Cure const & rhs );

		AMateria *	clone( void ) const;
		void		use( ICharacter & target );
};

#endif