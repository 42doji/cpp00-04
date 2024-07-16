// Description: Write a program that takes a string and displays it in upper case, followed by a newline.
// If no string is given, it displays * LOUD AND UNBEARABLE FEEDBACK NOISE *
#include <iostream>

int	main(int charc, char **argv)
{
	int i = 1;
	int j = 0;

	if (charc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < charc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}